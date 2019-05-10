


So, cost function, is a service that takes in a service called CostFunction.srv

rosObjects keeps the publisher subscriber object description

takeInput is the user interface where, it takes in the starting values from the
user. It then publishes these values to the topic "starting_values".
Simultaneously it subscribes to the topic "optimised_values". message type is
"parameter_values.msg". <----- Remember to change the name

simplex.cpp. subscribes to the starting values topic. it then optimises these values
using the simplex algorithm. To calculate the cost at each stage it uses the CostFunction
service.

Today: 09 May 2019 let's try to get atleast one loop running.
