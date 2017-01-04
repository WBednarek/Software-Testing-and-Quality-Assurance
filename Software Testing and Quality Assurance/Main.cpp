#include <iostream>
#include <cstdlib>
#include "Node.h"
#include "SuperComputer.h"
#include "Simulation.h"


using std::cin;
using std::cout;

int main() {

    Node node1;
    cout << "Welcome to supercomputer symulation system\n";
    cout << "Number of cores in node: " << node1.getNumberOfCores() << std::endl;

    cout << "What would you like to do?\n\n 1. Log in to existing account\n 2. Add new account\n" << std::endl;


    Simulation sim(7);
    sim.startSimulation();
    //system("pause");
    return 0;
}