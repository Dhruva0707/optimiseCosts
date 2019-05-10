/************************************************************************
 * 
 * Author: Dhruva Bhatia
 * Date: 7th May 2019
 * Description: This node is used to one get the starting values from the
 * starting values topic.
 * Then, it uses the CostFunction service to caluclate the cost
 * It then runs the simplex algorithm, to find the ideal values
 * It then publishes these on the optimised_values topic
 * 
 ************************************************************************/
#include "rosObjects.h"
#define INCR 10.0     // increment to define the starting values

using namespace std; 

// define the constants used for the simplex
const float alpha = 1; 
const float gama = 2;
const float rho   = 0.5;
const float sigma = 0.5;

// Function to calculate the cost
// parameters, values, client, message type
double calcCost(float a, float b, ros::ServiceClient client, optimise::CostFunction srv)
{
	srv.request.x = a;
	srv.request.y = b;
	client.call(srv);
	return srv.response.cost; 
	
}

int main(int argc, char** argv)
{
	// initialise ros for this executable, and store the starting value
	float startingCost;
	ros::init(argc,argv,"simplex");
	PublisherSubscriber optimise("optimised_values","starting_values",5);
	
	while(ros::ok())
	{
		// Spin to check if new starting values are available
		ros::spinOnce();
		
		
		if(optimise.recievedNow)
		{
			//1. Create an array of test values. since we are testing 2 dimensions, 
			float x[3][3];
			
			//2. initialise these values
			x[0][0]=optimise.recievedMsg[0];
			x[0][1]=optimise.recievedMsg[1];
			
			x[1][0]=x[0][0]+INCR;
			x[1][1]=x[0][1]-INCR;
			
			x[2][0]=x[0][0]-INCR;
			x[2][1]=x[0][1]-INCR;
			
			
			//3. Create a cost calculating client and message variable
			ros::NodeHandle n;
			ros::ServiceClient client = n.serviceClient<optimise::CostFunction>("costCalc");
			optimise::CostFunction srv; 
			
			//4. Calculate costs for all the starting values
			for(int i=0;i<3;i++)
			{
				x[i][2]=calcCost(x[i][0],x[i][1],client,srv);
			}
			startingCost = x[0][2];
						
			int max_ind = -1;
			float max_cost = -2.0;
			int min_ind = 0;
			float min_cost = x[0][2];
			float x_c[2];
			int iteration =0; 		
			for(; iteration<5000;iteration++)
			{
				// Now we start the real minimisation 
				// 1. find the index with the max cost and min cost
				max_cost = -2;
				min_cost = x[0][2];
				max_ind = -1;
				min_ind = -1;
				for(int i =0; i<3;i++)
				{
					if(x[i][2]>max_cost)
					{
						max_ind=i;
						max_cost = x[i][2];
					}
					if(x[i][2]<min_cost)
					{
						min_cost = x[i][2];
						min_ind = i;
					}
				}
						
				// 2. First reflect
				// 		a.) calculate centroid				
				x_c[0]=(x[0][0]+x[1][0]+x[2][0]-x[max_ind][0])/2.0;
				x_c[1]=(x[0][1]+x[1][1]+x[2][1]-x[max_ind][1])/2.0;
				
				//		b.) reflect and find cost
				float x_r[3];
				for(int i =0; i<2;i++)
				{ x_r[i] = x_c[i]+alpha*(x_c[i]-x[max_ind][i]);}
				x_r[2]=calcCost(x_r[0],x_r[1],client,srv);
				
				//3. if this is the best value, expand
				if(x_r[2]<=min_cost)
				{
					float x_e[3];
					for(int i=0;i<2;i++)
					{
						x_e[i]=x_c[i]+gama*(x_c[i]-x[max_ind][i]);
					}
					x_e[2]=calcCost(x_e[0],x_e[1],client,srv);
					
					// 3. a) if expanded values is better replace the worst cost
					//		 with it
					if(x_e[2]<x_r[2])
					{
						for(int i=0;i<3;i++)
						{x[max_ind][i]=x_e[i];}
					}
					
					// 3. b) if not replace the worst cost with the the reflected values
					else
					{
						for(int i=0;i<3;i++)
						{x[max_ind][i]=x_r[i];}
					}
				}
				
				// 4. check if contraction is needed
				else if((x_r[2]<max_cost) && (x_r[2]>min_cost))
				{
					for(int i=0;i<3;i++)
					{x[max_ind][i]=x_r[i];}
				}
				else if(x_r[2]>=max_cost)
				{
					float x_cont[3];
					for(int i=0;i<2;i++)
					{x_cont[i]=x_c[i]-rho*(x_c[i]-x[max_ind][i]);}
					x_cont[2]=calcCost(x_cont[0],x_cont[1],client,srv);
					
				// 5. check if the situation has improved
					if(x_cont[2]<max_cost)
					{
						for(int i=0;i<3;i++)
						{x[max_ind][i]=x_cont[i];}
					}
					else
					{
				// 6. if situation has not improved, shrink
						for(int i=0;i<3;i++)
						{
							for(int j=0; j<2; j++)
							{x[i][j]=x[min_ind][j]-sigma*(x[min_ind][j]-x[i][j]);}
							x[i][2]=calcCost(x[i][0],x[i][1],client,srv);
						}
					}
				}
				
				// Now we check if the values have e reached close enough to each other
				float avg_cost_diff =0;
				
				// check the cumulative cost
				for(int i=0;i<3;i++)
				{
					avg_cost_diff += (x[i][2]-min_cost);
				}
				// check the avg distance between the datapoints and the centroid of the best values
				float avg_dist =0;
				for(int i=0;i<3;i++)
				{
					avg_dist += ((x_c[0]-x[i][0])*(x_c[0]-x[i][0])+(x_c[1]-x[i][1])*(x_c[1]-x[i][1]))/3;
				}
				
				// if the current values are close enough exit
				if(avg_cost_diff<0.005 && avg_dist<0.005)
				{
					cout<<"Gains have reduced to closest values. Exiting optimisation"<<endl;
					break;
				}
			}// this is the ending of an iteration
			
			// find the values that give the minimum cost
			min_cost = x[0][2];
			for(int i=0;i<3;i++)
			{
				if(x[i][2]<min_cost);
				{
					min_cost = x[i][2];
					min_ind = i;
				}
			}
			// diplay important information
			cout<<"initial Cost: "<<startingCost<<endl; 
			cout<<"final values: "<<x[min_ind][0]<<"   "<<x[min_ind][1]<<endl;
			cout<<"final cost: "<<min_cost<<endl;
			cout<<"number of iterations: "<<iteration<<endl;
			
			// publish these values so that they can be recieved by the user node
			optimise.Publish(x[min_ind][0],x[min_ind][1]);			
			
			optimise.recievedNow = false; 			
		}
	}
}