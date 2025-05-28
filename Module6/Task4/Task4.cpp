#include <iostream>
#include "WorkWithString.h"
#include "SortVector.h"
#include "CreateAndDeleteArray.h"
#include <vector>
#include <random>


int main()
{
    std::cout << "Task4" << std::endl;

    int* Array = new int[10];


    for (int i = 0; i < 10; ++i) {
        int number = 0;
        std::cout << "Enter a number: ";
        std::cin >> number;
        std::cout << std::endl;
        Array[i] = number;
    }


    for (int i = 0; i < 10; i++) {
        std::cout << Array[i] << " ";
    }

    std::cout << std::endl;
    std::cout << "Min: " << *std::min_element(Array, Array + 10) << std::endl;
    std::cout << "Max: " << *std::max_element(Array, Array + 10) << std::endl;

    std::cout << std::endl;
}
