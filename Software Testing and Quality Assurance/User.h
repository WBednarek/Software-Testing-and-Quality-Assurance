#pragma once

#include <string>


class User {

    int userID;
    int prioryty;
    double userBalance;
    unsigned int numberOfJobsInQueue;
    std::string accountTypeName;
    unsigned int currnetDemand;
    double timeOfCurrentJob;


public:
    User();

    User(int accountTypeNumber, unsigned int userID);

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

    int getUserID() const;
};

