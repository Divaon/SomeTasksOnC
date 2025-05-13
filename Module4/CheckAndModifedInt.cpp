#include "CheckAndModifedInt.h"
#include <iostream>

void CheckAndModifedInt(int* number)
{
	int result = (*number % 2 != 0 ? *number = *number >> 2 : (*number > 0 ? *number = *number << 2 : *number = *number >> 2));

	std::cout << result << std::endl;;

	return;
}
