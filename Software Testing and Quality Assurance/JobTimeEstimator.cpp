#include <random>
#include <chrono>
#include "JobTimeEstimator.h"

double JobTimeEstimator::estimateJobTime(int jobType) {
    double estimatedTime;

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine dre(seed);


    //Short job
    if (jobType == 0) {
        srand(time(NULL));
        //Job time in minutes
        std::uniform_int_distribution<int> gen(1, 60);
        estimatedTime = gen(dre);
    }
        //Medium-size job
    else if (jobType == 1) {
        srand(time(NULL));
        //Job time in minutes
        std::uniform_int_distribution<int> gen(1, 480);
        estimatedTime = gen(dre);
    }
        //Large job
    else if (jobType == 2) {
        srand(time(NULL));
        //Job time in minutes
        std::uniform_int_distribution<int> gen(1, 960);
        estimatedTime = gen(dre);
    }
        //Huge job
    else if (jobType == 3) {
        srand(time(NULL));
        //Job time in minutes
        std::uniform_int_distribution<int> gen(1000, 20000);
        estimatedTime = rand() % (20000) + 1000;
    } else {
        srand(time(NULL));
        std::cout << "No such job\nSetting default size as Medium-size job" << std::endl;
        estimatedTime = rand() % (480) + 1;
    }

    return estimatedTime;


}
