#pragma once
class Node
{


	unsigned int totalNumberOfCores;
	unsigned int nodeID;
	bool freeCores;


public:
	Node();

	Node(unsigned int ID);
	~Node();
	int getNumberOfCores();
	unsigned int setNumberOfCores(unsigned int numberOfDemandedCores);
	bool areThereEnoughFreeCores(unsigned int numberOfCoresToCheck);

	int getNodeID();

};

