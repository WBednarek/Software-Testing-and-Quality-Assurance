#include "SuperComputer.h"
#include "JobTimeEstimator.h"


SuperComputer::SuperComputer() : jobCostPerMinute(0.001) {

    initialiseListOfNodes();
}


SuperComputer::SuperComputer(std::vector<User> listOfUsers) : jobCostPerMinute(0.001) {

    (*this).superComputerUsersList = listOfUsers;
}

SuperComputer::~SuperComputer() {
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


void SuperComputer::calculateUserDemandCost() {


    for (auto &user : superComputerUsersList) {
        estimateWorkperiod(user);
        //Calculating cost for selected job job
        user.setUserBalance(user.getUserBalance() - (user.getTimeOfCurrentJob() * jobCostPerMinute));
    }

}

void SuperComputer::estimateWorkperiod(User &user) {
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

void SuperComputer::listOfActualJobs() {
    calculateUserDemandCost();
    std::cout << "USER ID\t\t" << "USER Balance\t" << "Estimated job time\t" << "USER Type\n" << std::endl;
    for (auto user : superComputerUsersList) {
        std::cout << user.getUserID() << "\t\t" << user.getUserBalance() << "\t\t" << user.getTimeOfCurrentJob()
                  << "\t\t\t" << user.getAccountTypeName() << "\n" << std::endl;
    }

}
