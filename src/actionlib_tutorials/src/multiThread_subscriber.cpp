#include <iostream>
#include "ros/ros.h"
#include "std_msgs/String.h"
#include <boost/thread.hpp>

using namespace std;


void callBack(const std_msgs::String::ConstPtr& msg)
{		
	
	cout<<endl<<"Subscriber: "<<msg->data.c_str()<<" has started"<<endl;
	sleep(3);
	cout<<endl<<"Subscriber: "<<msg->data.c_str()<<" is now sleeping"<<endl;
	
}

int main(int argc, char** argv)
{
	ros::init(argc,argv,"multiThread_Subscriber");
	
	//1. create a node handle
	ros::NodeHandle n;
	
		
	//2. create the two subscribers	
	/**/
	ros::SubscribeOptions ops;
	ops.template init<std_msgs::String>("chatter",1000,callBack);
	ops.transport_hints = ros::TransportHints();
	ops.allow_concurrent_callbacks = true;
	ros::Subscriber sub1 = n.subscribe(ops);
	//ros::Subscriber sub2 = n.subscribe(ops);
	/**/
	
	
	//3. make an Async spinner	
	ros::AsyncSpinner spinner(boost::thread::hardware_concurrency());
	
	while(ros::ok())
	{
		spinner.start();
		ros::waitForShutdown();
	}
	
	
	return 0;
}