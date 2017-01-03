#include "SuperComputer.h"


SuperComputer::SuperComputer()
{
    initailiseListOfNodes();
}


SuperComputer::~SuperComputer()
{
}

void SuperComputer::initailiseListOfNodes() {
    for (int i = 0; i < numberOfNodes; ++i) {
        computerNodes.push_back(Node((unsigned int) i));
    }

}

Node SuperComputer::getNode(unsigned int numberOfNode) {

    try {
        if (numberOfNode <= (*this).numberOfNodes) {
            return computerNodes.at(numberOfNode);
        } else {
            std::cout << "There is no such node\nReturning node with ID 0 " << std::endl;
            return computerNodes.at(0);
        }

    }
    catch (std::exception &e) {
        std::cout << "Standard exception: " << e.what() << std::endl;
    }


}

void SuperComputer::listOfActualJobs() {

}

void SuperComputer::calculateUserDemand(User u) {

}
