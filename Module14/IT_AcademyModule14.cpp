#include "CustomExceptions.h"
#include <iostream>

template <typename T>
double calculate(double a, double b, T operation)
{

	try {
		operation(a, b);
	}
	catch (const std::invalid_argument& e) {
		std::cout << "Invalid argument error: " << e.what() << std::endl;
		return 0;
	}
	catch (const std::domain_error& e) {
		std::cout << "Domain error: " << e.what() << std::endl;
		return 0;
	}
	catch (const InvalidLogArgument& e) {
		std::cout << "Logarithm error: " << e.what() << std::endl;
		return 0;
	}
	catch (const InvalidRadiusArgument& e) {
		std::cout << "Radius error: " << e.what() << std::endl;
		return 0;
	}
}

int main()
{



	auto Division{ [](double a, double b) {
		if (b == 0)
		{
			throw std::invalid_argument("Division by zero is not allowed.");
		}
		return a / b;
	} };

	auto Root{ [](double a, double b = 0 ) {
		if (a < 0)
		{
			throw std::domain_error("Root of negative value");
		}
		return std::pow(a, 0.5);
	} };

	auto Logarithm{ [](double a, double b = 0) {
		if (a < 0)
		{
			throw InvalidLogArgument();
		}
		return log(a);
	} };

	auto CircleArea{ [](double r, double b = 0) {
		if (r < 0)
		{
			throw InvalidRadiusArgument();
		}
		return r * r * 3.14159265;
	} };






	std::cout << calculate(10.0, 2.0, Division) << std::endl;     
	std::cout << calculate(5.0, 0.0, Division)  << std::endl;        

	std::cout << "\n";

	// Квадратный корень
	std::cout << calculate(16.0, 0.0, Root) << std::endl;     
	std::cout << calculate(-4.0, 0.0, Root) << std::endl;      

	std::cout << "\n";

	// Логарифм
	std::cout << calculate(100, 0.0, Logarithm) << std::endl;     
	std::cout << calculate(-1.0, 0.0, Logarithm) << std::endl;      

	std::cout << "\n";

	// Площадь круга
	std::cout << calculate(5.0, 0.0, CircleArea) << std::endl;    
	std::cout << calculate(-3.0, 0.0, CircleArea) << std::endl;  

	return 0;
}