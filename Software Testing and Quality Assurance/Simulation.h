//
// Created by  Wiktor Bednarek
//
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
#include <chrono>
#include <random>


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



