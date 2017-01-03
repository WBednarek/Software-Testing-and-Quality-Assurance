#pragma once

#include <iostream>
#include <vector>
#include "Node.h"

class SuperComputer
{

    const int numberOfNodes = 128;
    std::vector<Node> computerNodes;
	


public:
	SuperComputer();
	~SuperComputer();

    void initailizeListOfNodes();

    Node getNode(unsigned int numberOfNode);

};

