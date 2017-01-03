#pragma once
class Node
{


	unsigned int totalNumberOfCores;
	bool freeCores;

public:
	Node();
	~Node();
	int getNumberOfCores();
	unsigned int setNumberOfCores(unsigned int numberOfDemandedCores);
	bool areThereEnoughFreeCores(unsigned int numberOfCoresToCheck);

};

