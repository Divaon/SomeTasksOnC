#include "Factorial.h"
#include <cmath>

int GetFactorialInt(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
};

float GetFactorialFloat(float n)
{
    return tgamma(n + 1);
};
