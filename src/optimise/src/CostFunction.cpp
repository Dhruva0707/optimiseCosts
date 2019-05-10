/*****************************************************************
 * 
 * Author: Dhruva Bhatia
 * Date: 10th May 2019
 * Description: This is a service that takes in two inputs and
 * calculates the cost accordingly
 * 
 *****************************************************************/
#include "ros/ros.h"
#include "optimise/CostFunction.h"

float xgoal = 2.0; // arbitrary goal values
float ygoal = 1.0; 
float c = 2.4;

// function callback to go to if a reqests are found on the service
bool cost(optimise::CostFunction::Request &req,
		  optimise::CostFunction::Response &res)
{
	res.cost = (req.x-xgoal)*(req.x-xgoal)+
				(req.y-ygoal)*(req.y-ygoal)+
					c;
	return true;
}

int main(int argc, char **argv)
{
	ros::init(argc,argv,"CostFunction_server");
	ros::NodeHandle n;
	ros::ServiceServer costService = n.advertiseService("costCalc",cost);
	
	ros::spin();
	
	return 0;
}
