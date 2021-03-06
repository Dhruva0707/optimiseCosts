/*****************************************************************
 *
 * Title: Nelder Mead Algorithm
 * Author: Dhruva Bhatia
 * Date: 1st May 2019
 *
 * Description:
 * This is a basic program to test the Nelder mead cost optimisation
 * algorithm. It takes in a starting cost from the user and then
 * attempts to find the costs that result in the minimum cost. Overall,
 * the algorithm is continued for 50 iterations.
 *
 *****************************************************************/
#include <iostream>

using namespace std;

// The cost function attempts to return the cost based on the input parameters.
const int alpha = 1;
const float gama = 2;
const float rho = 0.5;
const float sigma = 0.5;

float cost(float x,float y,float z)
{
	// x represents the array of input values passed to the function
	// the function may be determined by the user to either send these values to
	// another application and use the desired vs actual response of the application
	// to identify the cost based on these parameters.
	// In this case, we are trying to optimise a 3D quadratic equation, where the
	// the best input parameters are absolute and equal to the values corresponding
	// to x0, y0 and z0 as described below:
	const float x0 = 0.15;
	const float y0 = 0.003;
	const float z0 = 0.05; // here we have taken these values at random

	float final_cost = (x-x0)*(x-x0)+   //continued on next line
			           (y-y0)*(y-y0)+   //continued on next line
					   (z-z0)*(z-z0)
					   +2;
	return final_cost;
}

int main(int argc, char** argv)
{	// in this case, there is no need to pass parameters to the main function,
	// I just do it, for practice sake, and use in ROS.

	// 1. First, we create an array to store the variables and there respective costs
	//		a. since we are optimising 3 variables, there will be 4 different data
	//         points. so the dimensions of the variable and cost matrix is 4x4
	//      b. columns as: [x y z cost] and each row specifing a particular data point
	float x[4][4];
	// 2. we get the first input values from the user
	cout<<"Enter the first starting value in the range 0.0 to 0.6:"<<endl;
	cin>>x[0][0];

	cout<<"Enter the second starting value in the range 0 to 0.005:"<<endl;
	cin>>x[0][1];

	cout<<"Enter the third starting value in the range 0 to 0.1:"<<endl;
	cin>>x[0][2];
	//3. initialise the first four rows
	//		a. first initialise the first parameter values
	x[1][0] = x[0][0]-x[0][0]/1.2;
	x[1][1] = x[0][1]+x[0][1]/3.0;
	x[1][2] = x[0][2]+x[0][2]/2.0;

	x[2][0] = x[0][0]+x[0][0]/2.0;
    x[2][1] = x[0][1]-x[0][1]/1.2;
    x[2][2] = x[0][2]+x[0][2]/3.0;

	x[3][0] = x[0][0]+x[0][0]/3.0;;
	x[3][1] = x[0][1]+x[0][1]/2.0;;
	x[3][2] = x[0][2]-x[0][2]/1.2;;
	//3.	b. now calculate the cost for each
	for(int i = 0; i<4; i++)
	{
		x[i][3]=cost(x[i][0],x[i][1],x[i][2]);
	}
	float cost_init = x[0][3];
	//3.	c. test if the starting values got set properly
	/*for(int i = 0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<x[i][j]<<"     ";
		}
		cout<<endl;
	}*/
	cout<<"Initialisation complete! starting optimisation: "<<endl;

	//4. Now, we start a loop that will run for 50 iterations overall, to minimise
	//   the cost
	unsigned long int iteration = 1;
	while(iteration<=50)
	{
		cout<<"Current iteration number = "<<iteration<<endl;
		//4.a. now we need to find the index with the max cost
		int max_ind = -1;
		float max_cost = -1;

		float min_cost = x[0][3];
		int min_ind = -1;

		for(int i=0;i<4;i++)
		{
			if(max_cost<x[i][3])
			{
				max_cost=x[i][3];
				max_ind = i;
			}
			if(min_cost<x[i][3])
			{
				min_cost=x[i][3];
				min_ind = i;
			}
		}
	// test this out:
	/*	cout<<max_cost<<endl;
		for(int i=0; i<4;i++)
		{
			cout<<x[max_ind][i]<<"     ";
		}*/

	//	b. Now we reflect this point about the centroid of the other three
	//		// to find the centroid we first sum the all the values
		float sumx0=0;
		for(int i=0;i<4;i++)
		{
			sumx0=x[i][0];
		}

		float sumx1=0;
		for(int i=0;i<4;i++)
		{
			sumx1=x[i][1];
		}

		float sumx2=0;
		for(int i=0;i<4;i++)
		{
			sumx2=x[i][2];
		}
					// array to store the centroid poistion
		float xcent[] = {(sumx0-x[max_ind][0])/3,(sumx1-x[max_ind][1])/3,(sumx2-x[max_ind][2])/3};

		float x_r[4]; //reflected point
		cout<<"Reflecting"<<endl;
		for(int i=0;i<3;i++)
		{
			x_r[i]=xcent[i]+alpha*(xcent[i]-x[max_ind][i]);
		}
		x_r[3] = cost(x_r[0],x_r[1],x_r[2]);


		//c. check if reflected value is the best so far
		if(x_r[3]<min_cost)
		{
			// in this case, expand in the same direction
			float x_e[4];
			cout<<"Expanding"<<endl;
			for(int i=0;i<3;i++)
			{
				x_e[i]=xcent[i]+gama*(x_r[i]-xcent[i]);
			}
			x_e[3] = cost(x_e[0],x_e[1],x_e[2]);
			// check if this is better than just reflection:
			if(x_e[3]<x_r[3])
			{
				// if so, then replace the original point with these new values
				for(int i=0;i<4;i++)
				{
					x[max_ind][i]=x_e[i];
				}
			}
			else
			{
				for(int i=0;i<4;i++)
				{
					x[max_ind][i]=x_r[i];
				}
				cout<<"Updating Values"<<endl;
			}

		}
		//4. d. if the reflected value is not as good, we need to contract
		else if(x_r[3]>=max_cost)
		{
			float x_c[4];
			for(int i=0;i<3;i++)
			{
				x_c[i]=xcent[i]+rho*(x[max_ind][i]-xcent[i]);
			}
			x_c[3]=cost(x_c[0],x_c[1],x_c[2]);


			//4. e. if still not better, perhaps we need to shrink towards
			//		the least value
			if(x_c[4]<max_cost)
			{
				for(int i=0;i<4;i++)
				{
					x[max_ind][i]=x_c[i];
				}
			}

			else
			{
				for(int i=0; i<4;i++)
				{
					if(i!=min_ind)
					{
						for(int j=0;j<3;j++)
						{
							x[i][j]=x[min_ind][j]-sigma*(x[i][j]-x[min_ind][j]);
						}
						x[i][3]=cost(x[i][0],x[i][1],x[i][2]);
					}
				}
			}
		}

		cout<<"Current max cost = "<<max_cost<<endl;
		cout<<"current values: "<<endl;
		cout<<x[max_ind][0]<<"  "<<x[max_ind][1]<<"  "<<x[max_ind][2]<<endl;

		iteration++;
	}

	// 5. now we have hopefully, the 4 best points we could contract to.
	// so we the best point from this lot
	int min_ind=0;
	float min_cost=x[0][3];
	for(int i=0;i<4;i++)
	{
		if(min_cost>x[i][3])
		{
			min_cost=x[i][3];
			min_ind = i;
		}
	}

	cout<<"ideal parameter values are: "<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<x[min_ind][i]<<"   ";
	}
	cout<<endl<<"initial cost: "<<cost_init;
	cout<<endl<<"min cost found = "<<x[min_ind][3];

	return 0;
}
