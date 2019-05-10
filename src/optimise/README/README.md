Here we describe the workflow of the optimisation application

1. a) First, need a node that prompts the user for starting values (takeInput)
   b) now, we need to publish these values through a message on a topic (topic: inputValues)
   c) we create a node called optimise initial costs that first reads the
      broadcasted input values.
      
