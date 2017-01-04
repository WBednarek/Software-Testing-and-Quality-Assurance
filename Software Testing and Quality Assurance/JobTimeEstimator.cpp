#include "JobTimeEstimator.h"

double JobTimeEstimator::estimateJobTime(int jobType) {
    double estimatedTime;

    srand(time(NULL));
    //Short job
    if (jobType == 0) {
        //Job time in minutes
        estimatedTime = rand() % 59 + 1;
    }
        //Medium-size job
    else if (jobType == 1) {
        //Job time in minutes
        estimatedTime = rand() % (480) + 1;
    }
        //Large job
    else if (jobType == 2) {
        //Job time in minutes
        estimatedTime = rand() % (960) + 1;
    }
        //Huge job
    else if (jobType == 3) {
        //Job time in minutes
        estimatedTime = rand() % (20000) + 1000;
    } else {
        std::cout << "No such job\nSetting default size as Medium-size job" << std::endl;
        estimatedTime = rand() % (480) + 1;
    }


    return 0;
}
