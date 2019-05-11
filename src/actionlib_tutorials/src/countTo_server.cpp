#include "ros/ros.h"
#include "actionlib/server/simple_action_server.h"
#include "actionlib_tutorials/CountToAction.h"
#include <iostream>
#include <sstream>

using namespace std; 

class CountToAction
{
private:
	ros::NodeHandle nh;
	actionlib::SimpleActionServer<actionlib_tutorials::CountToAction>actionServer;
	//initialise nodehandle and action server
	string action_name;
	actionlib_tutorials::CountToFeedback feedback;
	actionlib_tutorials::CountToResult result; 
public:
	CountToAction(string name):actionServer(nh,name,boost::bind(&CountToAction::callBack,this,_1),false),
	action_name(name)
	{
		actionServer.start();		
	}
	
	~CountToAction(void)
	{}
	
	void callBack(const actionlib_tutorials::CountToGoalConstPtr &goal)
	{
		ros::Rate r(1); // set up frequency for sleep
		bool success = true;
		for(int i = 0; i < (goal->goal_number+1); i++)
		{
			if(this->actionServer.isPreemptRequested() || !ros::ok())
			{
				ROS_INFO("%s: Preempted",action_name.c_str());
				this->actionServer.setPreempted();
				success = false;
				break;
			}
			this->feedback.currentNumber = i;
			actionServer.publishFeedback(this->feedback);
			
			r.sleep();
		}
		
		if(success)
		{
			stringstream ss;
			ss<<"Counted to "<<this->feedback.currentNumber;
			//this->result.completionMessage = "Counted to "+to_string(this->feedback.currentNumber);
			this->result.completionMessage = ss.str();
			actionServer.setSucceeded(this->result);
		}		
	}
};

int main(int argc, char** argv)
{
	ros::init(argc,argv, "CountTo_Server");
	
	CountToAction countTo("countTo");
	ros::spin();
	
	return 0;
}