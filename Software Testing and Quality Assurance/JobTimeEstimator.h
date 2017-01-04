
#ifndef SOFTWARE_TESTING_AND_QUALITY_ASSURANCE_JOBTIMEESTIMATOR_H
#define SOFTWARE_TESTING_AND_QUALITY_ASSURANCE_JOBTIMEESTIMATOR_H

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>
#include <chrono>
//Needed for Sleep function
#include <windows.h>

class JobTimeEstimator {


public:

    static double estimateJobTime(int jobType);

};


#endif //SOFTWARE_TESTING_AND_QUALITY_ASSURANCE_JOBTIMEESTIMATOR_H
