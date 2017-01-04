
#include "JobTimeEstimator.h"

double JobTimeEstimator::estimateJobTime(int jobType) {
    double estimatedTime;

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine dre(seed);
    Sleep(2);

    //Short job
    if (jobType == 0) {

        //Job time in minutes
        std::uniform_int_distribution<int> gen(1, 60);
        estimatedTime = gen(dre);
    }
        //Medium-size job
    else if (jobType == 1) {

        //Job time in minutes
        std::uniform_int_distribution<int> gen2(1, 480);
        estimatedTime = gen2(dre);
    }
        //Large job
    else if (jobType == 2) {

        //Job time in minutes
        std::uniform_int_distribution<int> gen3(1, 960);
        estimatedTime = gen3(dre);
    }
        //Huge job
    else if (jobType == 3) {

        //Job time in minutes
        std::uniform_int_distribution<int> gen4(1000, 20000);
        estimatedTime = gen4(dre);
    } else {
        std::uniform_int_distribution<int> gen5(1, 480);
        std::cout << "No such job\nSetting default size as Medium-size job" << std::endl;
        estimatedTime = gen5(dre);
    }

    return estimatedTime;


}
