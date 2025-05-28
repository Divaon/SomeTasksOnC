#include <iostream>
#include "WorkWithString.h"
#include "SortVector.h"
#include "CreateAndDeleteArray.h"
#include <vector>
#include <random>


int main()
{


    std::cout << "Task4" << std::endl;

    std::vector<int> Vec{};


    for (int i = 0; i < 10; i++) {
        int number = 0;
        std::cout << "Enter a number: ";
        std::cin >> number;
        std::cout << std::endl;
        Vec.push_back(number);
    }


    for (int i = 0; i < Vec.size(); i++) {
        std::cout << Vec[i] << " ";
    }

    std::cout << std::endl;
    std::cout << "Min: " << *std::min_element(begin(Vec), end(Vec)) << std::endl;
    std::cout << "Max: " << *std::max_element(begin(Vec), end(Vec)) << std::endl;
    std::cout << std::endl;

}
