#include "Car.h"
#include <iostream>

void Car::Repair()
{
	isRepaired = true;
}

std::ostream& operator<<(std::ostream& stream, const PassengerCar& car)
{
	stream << "PassengerCar name: " << car.name <<" PassengerCar is repair?: " << (car.isRepaired ? "true" : "false");
	return stream;
}

std::ostream& operator<<(std::ostream& stream, const CargoCar& car)
{
	stream << "CargoCar name: " << car.name << " CargoCar is repair?: " << (car.isRepaired ? "true" : "false");
	return stream;
}

CargoCar::CargoCar(const std::string& name)
{
	this->name = name;
	this->isRepaired = false;
}

PassengerCar::PassengerCar(const std::string& name)
{
	this->name = name;
	this->isRepaired = false;
}
