#include <iostream>
#include <random>
#include <vector>
#include "CalculateVector.h"


int main() {

    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 100);

    std::vector<int> vec;


    for (int i = 0; i < 100; ++i) {
        vec.push_back(distrib(gen));
    }

    CalculateVector calculateVector;

    calculateVector.calculate(vec);

    std::cout << "Sum: " << calculateVector.getSum() << std::endl;
    std::cout << "Max: " << calculateVector.getMax() << std::endl;
    std::cout << "Min: " << calculateVector.getMin() << std::endl;

    return 0;
}


