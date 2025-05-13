#include <iostream>

void GetMultiplicationTableByWhile()
{
	std::cout << "Multiplication Table By While" << std::endl;
	int i = 1;
	while (i < 10) {
		int j = 1;
		while (j < 10)
		{
			std::cout << i << "*" << j << "=" << i * j << " ";
			j++;
		}
		j = 1;
		i++;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return;
};

void GetMultiplicationTableByDoWhile()
{
	std::cout << "Multiplication Table By Do While" << std::endl;
	int i = 1;
	do {
		int j = 1;
		do
		{
			std::cout << i << "*" << j << "=" << i * j << " ";
			j++;
		} while (j < 10);
		j = 1;
		i++;
		std::cout << std::endl;
	} while (i < 10);
	std::cout << std::endl;
	return;
};

void GetMultiplicationTableByFor()
{
	std::cout << "Multiplication Table By For" << std::endl;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			std::cout << i << "*" << j << "="<<i*j << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return;
};