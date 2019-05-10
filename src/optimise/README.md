Cost Optimisation version 1. 10/05/2019
--------------------------------------
Author: Dhruva Bhatia
Email: bhatia_dhruva@yahoo.com
phone: +91 7720049517
--------------------------------------

QUICK LAUNCH:
1. first setup the source from the catkin workspace
   $: source devel/setup.bash

2. launch the Optimisation launch file
   $: roslaunch optimise Optimisation.launch

WORKING:

This entire application runs on the basis of three 3 programs listed below:

   1. takeInput: this program creates a ros node that takes in inputs from the
                 user. It then publishes these starting values to a topic, from
                 where it is picked up by the optimisation program.
                 takeInput then awaits a  response on the topic optimised_costs
                 to print out the optimised values.

   2. simplex:   This program creates a ros node that subscribes to the starting
                 values obtained from the takeInput program. It then optimises
                 these values by behaving as a client to the service offered by
                 CostFunction service. After optimisation it publishes the optim-
                 -sed values on the topic. it then again starts looking for new
                 inputs.

   3. CostFunction: This is s service that calculates the cost o the given
                  values based on a quadratic equation. However the CostFunction
                  node could be anything. Say in case of a drone, it sets the
                  pid parameters based on the values it recieves. It then sends
                  the drone some standart trajectory, and compares it with the
                  reponse of the drone to calculate the response. This is the
                  portion that is worth modifying. 
