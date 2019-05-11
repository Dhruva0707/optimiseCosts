#include "ros/ros.h"
#include "actionlib/client/simple_action_client.h"
#include "actionlib_tutorials/CountToAction.h"
#include <iostream>

using namespace std;

typedef actionlib::SimpleActionClient<actionlib_tutorials::CountToAction> Client;

class clientNode
{
public:
	int rec_feedback;
	string rec_result;
	bool done;
	bool feedbackRec;
	
private:
	//ros::NodeHandle nH;
	Client action_client;
	string name;
public:
	clientNode(string name):action_client("countTo",true),name(name)
	{
		cout<<"Waiting for server to start"<<endl;
		this->action_client.waitForServer();
		cout<<"Ready to send goals"<<endl;
		this->done = true;
		this->feedbackRec = false;
	}
	
	void uploadGoal(int countTo)
	{
		actionlib_tutorials::CountToGoal goal;
		goal.goal_number = countTo;
		this->done = false;
		cout<<"Goal Has Been Sent"<<endl;
		
		action_client.sendGoal(goal, 
							   boost::bind(&clientNode::resultCB, this, _1, _2),
							   boost::bind(&clientNode::activeCB, this),
							   boost::bind(&clientNode::feedbackCB, this,_1)
							  );
		
	}
	
	void resultCB(const actionlib::SimpleClientGoalState& state,
						const actionlib_tutorials::CountToResultConstPtr& result)
	{
		this->rec_result = result->completionMessage;
		this->done=true;
	}
	
	void activeCB()
	{
		// cout<<endl<<"Goal has been sent"<<endl;
	}
	
	void feedbackCB(const actionlib_tutorials::CountToFeedbackConstPtr& feedback)
	{
		this->rec_feedback = feedback->currentNumber;
		this->feedbackRec = true;
	}
};

int main(int argc, char** argv)
{
	ros::init(argc,argv,"CountTo_Client_Node");
	clientNode my_client("CounTo_Client");
	int num;
	bool iter1 = true;
	bool ok = true;
	
	while(ros::ok() && ok)
	{
		ros::spinOnce();
		
		// 1. prompt for input if last iteration is completed
		if(my_client.done)
		{
			if(!iter1)
			{
				cout<<"Count Completed"<<endl;
				cout<<my_client.rec_result<<endl<<"================================"<<endl<<endl;			
			}
			else
			{
				iter1=false;
			}
			
			cout<<"Enter a number (-1 to exit): ";
			cin>>num;
			
			if(num<0)
			{
				break;
				ok = false;
			}
			
					
			my_client.uploadGoal(num);
			
		}
		
		// 2. if a feedback has been recieved, show it
		if(my_client.feedbackRec)
		{
			cout<<"Feedback Recieved: "<<"Current count is: "<<my_client.rec_feedback<<endl;
			my_client.feedbackRec = false;
		}
		
	}
	cout<<"Client Terminated"<<endl<<"Exiting"<<endl<<endl;
	
	return 0;
}