/**********************************************************************
 * 
 * Author: Dhruva Bhatia
 * Date: 5th May 2019
 * Description: This node is used to take inputs from the user and then 
 * publish this data on the 'starting_values' topic. It also subscribes
 * to the 'optimised_values' topic until it recieves a response. after
 * publishing. The rosObject library I created is used. 
 * 
 **********************************************************************/
#include "rosObjects.h"

using namespace std;

int main(int argc, char** argv)
{
	// 1. Initialise Ros for this executable	
	ros::init(argc,argv,"takeInput");
	// 2. Create PublisherSubscriber object with publisher on topic starting_values
	//    subscriber on topic optimised_values
	PublisherSubscriber user("starting_values","optimised_values",5);
	
	// 3. Get the float starting values from the user
	float x,y;
	ros::Rate rate(0.1);
	
	user.recievedNow=true; // this is done to make sure the system is ready to 
						   // start looption from the system
	bool iteration1 = true;// boolean to check if this is the first time the pr-
						   // -ogram has started
	
	// 4. Loop to keep looking for optimised_values and keep prompting the user 
	//    new values
	while(ros::ok())      
	{
		// 4. a) spin to check if anything recieved
		ros::spinOnce();
		
		// 4. b) if a new message was recieved, display these and prompt for 
		//		 starting values
		if(user.recievedNow)
		{
			// i> if this is the first time the program is run do not display
			//	  display the optimised values
			if(!iteration1)
				{cout<<"optimised values are: "<<user.recievedMsg[0]<<"  "<<user.recievedMsg[1]<<endl;}
			// ii> get the user input
			cout<<"Enter first number: "<<endl;
			cin>>x;
			cout<<"Enter second number: "<<endl;
			cin>>y;
			iteration1=false;
			
			// iii> publish these values
			user.Publish(x,y);
			ros::spinOnce();
			user.recievedNow = false;			
		}
	}
	
	
	
}