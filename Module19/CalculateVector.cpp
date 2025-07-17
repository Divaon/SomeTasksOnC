#include "CalculateVector.h"


void CalculateVector::calculate(std::vector<int> vec)
{
    _sum = 0;
    _max = 0;
    _min = 0;

    std::thread t1(&CalculateVector::calculateSum, this, vec);
    std::thread t2(&CalculateVector::findMax, this, vec);
    std::thread t3(&CalculateVector::findMin, this, vec);

    t1.join();
    t2.join();
    t3.join();

}


void CalculateVector::calculateSum( std::vector<int> vec) {
    int LocalSum = 0;
    for (int i = 0; i < vec.size(); i++) {
        LocalSum = LocalSum + vec[i];
    }

    std::lock_guard<std::mutex> lock(mtx);
    _sum = LocalSum;
}


void CalculateVector::findMax( std::vector<int> vec) {
    int LocalMax = vec[0];  
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] > LocalMax) {
            LocalMax = vec[i];
        }
    }

    std::lock_guard<std::mutex> lock(mtx);
    _max = LocalMax;
}

void CalculateVector::findMin( std::vector<int> vec) {
    int LocalMin = vec[0];
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] < LocalMin) {
            LocalMin = vec[i];
        }
    }

    std::lock_guard<std::mutex> lock(mtx);
    _min = LocalMin;
}

const int CalculateVector::getMin()
{
    return _min;
};

const int CalculateVector::getMax()
{
    return _max;
};

const int CalculateVector::getSum()
{
    return _sum;
};

