#include "Node.h"



Node::Node() : totalNumberOfCores(16)
{
}


Node::~Node()
{
}

int Node::getNumberOfCores()
{
	return totalNumberOfCores;
}

unsigned int Node::setNumberOfCores(unsigned int numberOfDemandedCores)
{
	if (areThereEnoughFreeCores(numberOfDemandedCores))
	{
		return totalNumberOfCores - numberOfDemandedCores;
	}
	
	
}

bool Node::areThereEnoughFreeCores(unsigned int numberOfCoresToCheck)

{
	if (totalNumberOfCores >= numberOfCoresToCheck)
	{
		(*this).freeCores = true;
	}
	else
	{
		(*this).freeCores = false;
	}

	return (*this).freeCores;
}




