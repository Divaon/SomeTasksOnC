#pragma once

#include <thread>
#include <mutex>
#include <vector>


class CalculateVector
{
public:
    void calculate(std::vector<int> vec);
    void calculateSum(std::vector<int> vec);
    void findMax(std::vector<int> vec);
    void findMin(std::vector<int> vec);
    const int getMin();
    const int getMax();
    const int getSum();



private:
    int _min = 0;
    int _max = 0;
    int _sum = 0;

    std::mutex mtx;
};

