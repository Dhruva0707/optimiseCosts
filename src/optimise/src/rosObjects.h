/************************************************************************
 * 
 * Author: Dhruva Bhatia
 * Date: 5th May 2019
 * Description: This is a header file, which lists the objects that may be
 * used by the nodes. Following are the objects defined here:
 * PublisherSubscriber: line  . This object can subscribe and publish on two 
 * different topics. It stores the data retrieved from the subscription in a 
 * message
 * 
 ************************************************************************/
#ifndef PUBLISHER_SUBSCRIBER_H
#define PUBLISHER_SUBSCRIBER_H

#include <iostream> 						// required to use string values
#include <ros/ros.h>
#include "optimise/parameter_values.h"		// parameter_values is a message type used here
#include "optimise/CostFunction.h"          // CostFunction is a service used

using namespace std;
/*
 * First, we create am object, that can both publish and subscribe to different 
 * topics
 */
class PublisherSubscriber
{
public: 
	// 1. Create essential public variable
	float recievedMsg[2]; // stores the recieved message
	bool recievedNow;     // A boolean to remember whether a message has been 
	                      // recieved by the subscribed channel
	// 2. Create essential functions used
public:
	// 2. a) default constructor
	PublisherSubscriber(){};
	// 2. b) constructor that creates the subscriber and publisher objects
	PublisherSubscriber(string PublishT, string SubscribeT, int queueSize)
	{
		// i> publisher and subscriber objects based on the user input
		publisherObj = nH.advertise<optimise::parameter_values>(PublishT, queueSize);
		subscriberObj = nH.subscribe<optimise::parameter_values>(SubscribeT,queueSize,&PublisherSubscriber::subscriberCallback,this);
		// ii> since nothing has been recieved yet, recievedNow is set as false
		recievedNow = false;
	}
	// 2. c) subscriberCallback method to store the values obtained from the 
	//		 channel to the inbuilt variable
	void subscriberCallback(const optimise::parameter_values::ConstPtr& rec_msg)
	{
		this->recievedMsg[0] = rec_msg->x;
		this->recievedMsg[1] = rec_msg->y;
		recievedNow = true; // as message is just recieved, recieved now is set 
							// to true. Later whenever the subscribed values are
							// used by the main code, it will be set again to false
	}
	// 2. d) Publish method used to publish data using the publisher object
	void Publish(float x, float y)
	{
		optimise::parameter_values msg;
		msg.x = x;
		msg.y = y;
		publisherObj.publish(msg);
	}
	
	// 3. Define the private members
private:
	ros::NodeHandle nH;
	ros::Subscriber subscriberObj;
	ros::Publisher publisherObj;
};

#endif

