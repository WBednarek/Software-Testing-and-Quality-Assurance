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


    Simulation sim(20);
    sim.startSimulation();
    //system("pause");
    return 0;
}