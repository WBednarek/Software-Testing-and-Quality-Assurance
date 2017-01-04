#pragma once
#include <iostream>
#include <vector>
#include "Node.h"
#include "User.h"

class SuperComputer
{

    static const int numberOfNodes = 128;
    std::vector<Node> computerNodes;
    double jobCostPerMinute;
    std::vector<User> superComputerUsersList;
	


public:
	SuperComputer();

    SuperComputer(std::vector<User> listOfUsers);
	~SuperComputer();

    void initialiseListOfNodes();

    Node getNode(unsigned int numberOfNode);

    void listOfActualJobs();

    void calculateUserDemandCost();

    void estimateWorkperiod(User &user);
};

