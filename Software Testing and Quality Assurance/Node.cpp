#include "Node.h"


//Default constructor
Node::Node() : totalNumberOfCores(16) {

}

Node::Node(unsigned int ID) : totalNumberOfCores(16) {
    (*this).nodeID = ID;

}

Node::~Node() {
}

int Node::getAvailableNumberOfCoresInNode() {
    return totalNumberOfCores;
}

unsigned int Node::setAvailableNumberOfCoresInNode(unsigned int numberOfDemandedCores) {
    if (areThereEnoughFreeCores(numberOfDemandedCores)) {
        return (*this).totalNumberOfCores - numberOfDemandedCores;
    }

}

bool Node::areThereEnoughFreeCores(unsigned int numberOfCoresToCheck) {
    if (totalNumberOfCores >= numberOfCoresToCheck) {
        (*this).freeCores = true;
    } else {
        (*this).freeCores = false;
    }

    return (*this).freeCores;
}

int Node::getNodeID() {
    return nodeID;
}






