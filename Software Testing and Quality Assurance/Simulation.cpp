//
// Created by Wiktor Bednarek
//

#include <chrono>
#include <random>
#include "Simulation.h"

Simulation::Simulation() : areUsersMade(false) {


}


Simulation::Simulation(unsigned int numOfUsers) : areUsersMade(false) {

    (*this).numberOfUsers = numOfUsers;

}


Simulation::~Simulation() {

}


void Simulation::startSimulation() {

    makeUsers();
    //Code which need a test!
    if (areUsersMade) {
        superComputer = SuperComputer(superComputerUsers);
        superComputer.listOfActualJobs();
    }

}

void Simulation::makeUsers() {


    for (int i = 0; i < numberOfUsers; ++i) {
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::default_random_engine dre(seed);
        std::uniform_int_distribution<int> gen(0, 2);
        int randNumber = gen(dre);
        Sleep(20);
        (*this).superComputerUsers.push_back(User(randNumber, i));
    }

    for (int i = 0; i < numberOfUsers; ++i) {
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::default_random_engine dre(seed);
        std::uniform_int_distribution<int> gen(0, 3);
        int randNumber = gen(dre);
        Sleep(10);
        (*this).superComputerUsers.at(i).setCurrnetDemand(randNumber);
    }

    areUsersMade = true;

}
