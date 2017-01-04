//
// Created by  Wiktor Bednarek
//
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
#ifndef SOFTWARE_TESTING_AND_QUALITY_ASSURANCE_SIMULATION_H
#define SOFTWARE_TESTING_AND_QUALITY_ASSURANCE_SIMULATION_H


#include "SuperComputer.h"

class Simulation {

    SuperComputer superComputer;
    unsigned int numberOfUsers;
    std::vector<User> superComputerUsers;
    bool areUsersMade;


public:
    Simulation();

    Simulation(unsigned int numOfUsers);
    ~Simulation();

    void makeUsers();

    void startSimulation();

};


#endif //SOFTWARE_TESTING_AND_QUALITY_ASSURANCE_SIMULATION_H
