#include <iostream>
#include <vector>
#include <random>


int main()
{
    std::cout << "Task4" << std::endl;

    std::unique_ptr<int[]> Array = std::make_unique<int[]>(10);

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
    std::cout << "Min: " << *std::min_element(&Array[0], &Array[0] + 10) << std::endl;
    std::cout << "Max: " << *std::max_element(&Array[0], &Array[0] + 10) << std::endl;

    std::cout << std::endl;
}
