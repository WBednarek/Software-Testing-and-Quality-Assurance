#pragma once

#include <string>


class User {

    int userBalance;
    unsigned int numberOfJobsInQueue;
    int prioryty;
    std::string accountTypeName;
    unsigned int currnetDemand;
    double timeOfCurrentJob;


public:
    User();

    User(int accountTypeNumber);

    ~User();

    void setAccountType(int accountTypeNum);

    const std::string &getAccountTypeName() const;

    int getPrioryty() const;

    int getUserBalance() const;

    unsigned int getNumberOfJobsInQueue() const;

    void setUserBalance(int userBalance);

    void setNumberOfJobsInQueue(unsigned int numberOfJobsInQueue);

    unsigned int getCurrnetDemand() const;

    void setCurrnetDemand(unsigned int currnetDemandNumber);

    double getTimeOfCurrentJob() const;

    void setTimeOfCurrentJob(double timeOfCurrentJob);
};

