#include <iostream>
#include "WorkWithString.h"
#include <cstdlib>
#include <cstring> 

void reverseString(char* str)
{

	for (int i = 0; i <= div(strlen(str), 2).quot; i++)
	{
		char temp = str[i];
		str[i] = str[strlen(str)-i-1];
		str[strlen(str)- i - 1] = temp;

	}
};