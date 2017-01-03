#include <iostream>
#include <cstdlib>
#include "Node.h"
#include "SuperComputer.h"


using std::cin;
using std::cout;

int main() {

    Node node1;
    SuperComputer computer;
    cout << "Welcome to supercomputer symulation system\n";
    cout << "What would you like to do?\n\n 1. Log in to existing account\n 2. Add new account\n" << std::endl;

    cout << "Number of cores in node: " << node1.getNumberOfCores() << "\n" << "Node ID is: "
         << computer.getNode(25).getNodeID() << std::endl;
    //system("pause");
    return 0;
}