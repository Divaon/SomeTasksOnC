#include <iostream>
#include "Factorial.h"


int main()
{
    std::cout << "Task 1 " << std::endl;
    
#if defined(INT_FACTORIAL) || defined(FLOAT_FACTORIAL)
        int n = 4;
        std::cout << "Factorial of " << n << " = " << GetFactorialInt(n) << std::endl;
#endif

#ifdef FLOAT_FACTORIAL
    float n2 = 4.000f;
    std::cout << "Factorial of " << n2 << " = " << GetFactorialFloat(n2) << std::endl;

    n2 = 0.5;
    std::cout << "Factorial of " << n2 << " = " << GetFactorialFloat(n2) << std::endl;
#endif




}

