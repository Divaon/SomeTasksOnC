#include <iostream>

int main()
{
    std::cout << "Task1\n";

    int number = 18;

    int result = (number % 2 != 0 ? number = number >> 2 : (number > 0 ? number = number << 2 : number = number >> 2));

    std::cout << result << std::endl;;
}

