#include "SuperComputer.h"
#include "JobTimeEstimator.h"


SuperComputer::SuperComputer()
{
    initialiseListOfNodes();
}


SuperComputer::~SuperComputer()
{
}

void SuperComputer::initialiseListOfNodes() {
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
    // estimateWorkperiod();
}

void SuperComputer::estimateWorkperiod(User user) {
    //Short job
    if (user.getCurrnetDemand() == 0) {
        user.setTimeOfCurrentJob(JobTimeEstimator::estimateJobTime(0));

    } else if (user.getCurrnetDemand() == 1) {
        user.setTimeOfCurrentJob(JobTimeEstimator::estimateJobTime(1));
    } else if (user.getCurrnetDemand() == 2) {
        user.setTimeOfCurrentJob(JobTimeEstimator::estimateJobTime(2));
    } else if (user.getCurrnetDemand() == 3) {
        user.setTimeOfCurrentJob(JobTimeEstimator::estimateJobTime(3));
    }

}
