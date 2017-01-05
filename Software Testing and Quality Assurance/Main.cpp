#include <iostream>

#include "Node.h"
#include "SuperComputer.h"
#include "Simulation.h"


using std::cin;
using std::cout;

int main() {

    Node node1;
    cout << "Welcome to supercomputer symulation system\n";
    cout << "Number of cores in node: " << node1.getAvailableNumberOfCoresInNode() << std::endl;


    Simulation sim(26);
    sim.startSimulation();
    //Comment if not nessesary
    system("pause");
    return 0;
}