#pragma once
#include <iostream>
#include <vector>
#include "Node.h"
#include "User.h"

class SuperComputer
{

    const int numberOfNodes = 128;
    std::vector<Node> computerNodes;
	


public:
	SuperComputer();
	~SuperComputer();

    void initialiseListOfNodes();

    Node getNode(unsigned int numberOfNode);

    void listOfActualJobs();

    void calculateUserDemand(User u);

    void estimateWorkperiod(User user);
};

