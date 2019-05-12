#include <iostream>
#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{
	ros::init(argc,argv,"mutiThread_publisher");
	ros::NodeHandle n;
	
	ros::Publisher pub = n.advertise<std_msgs::String>("chatter",10);
	
	
	std_msgs::String msg;
	int counter = 0;
	sleep(5);
	while(counter < 3)
	{
		msg.data = " subscriber 1";
		pub.publish(msg);
		sleep(2);
		counter++;
		
		msg.data = " subscriber 2";
		pub.publish(msg);
		sleep(2);
		counter++;
	}
	
	return 0;	
}