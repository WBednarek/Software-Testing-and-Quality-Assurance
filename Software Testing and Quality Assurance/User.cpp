#include "User.h"


User::User() : userBalance(100)
{
}

User::User(int accountTypeNumber) : userBalance(100) {
    setAccountType(accountTypeNumber);
}


User::~User()
{
}

void User::setAccountType(int accountTypeNum) {
    switch (accountTypeNum) {

        case 0 : {
            (*this).accountTypeName = "STUDENT";
            break;
        }
        case 1 : {
            (*this).accountTypeName = "RESEARCHER";
            break;
        }
        case 2 : {
            (*this).accountTypeName = "IT_SUPPORT";
            break;
        }
        default: {
            (*this).accountTypeName = "STUDENT";
            break;
        }

    }

}

const std::string &User::getAccountTypeName() const {
    return accountTypeName;
}

int User::getPrioryty() const {
    return prioryty;
}

int User::getUserBalance() const {
    return userBalance;
}

unsigned int User::getNumberOfJobsInQueue() const {
    return numberOfJobsInQueue;
}

void User::setUserBalance(int userBalance) {
    User::userBalance = userBalance;
}

void User::setNumberOfJobsInQueue(unsigned int numberOfJobsInQueue) {
    User::numberOfJobsInQueue = numberOfJobsInQueue;
}

unsigned int User::getCurrnetDemand() const {
    return currnetDemand;
}

void User::setCurrnetDemand(unsigned int currnetDemandNumber) {
    User::currnetDemand = currnetDemandNumber;
}

double User::getTimeOfCurrentJob() const {
    return timeOfCurrentJob;
}

void User::setTimeOfCurrentJob(double timeOfCurrentJob) {
    User::timeOfCurrentJob = timeOfCurrentJob;
}
