#include <iostream>
#include "SortVector.h"
#include <vector>
#include <random>


int main()
{


    std::cout << "Task3" << std::endl;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    std::vector<int> Vec{};


    for (int i = 0; i < 10; ++i) {
        Vec.push_back(dis(gen));
    }

    SortVector(Vec);


    for (int val : Vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;


}
