#pragma once
#include <string>

class Car
{
public:
	void Repair();
protected:
	bool isRepaired;
	std::string name;
};

class PassengerCar : public Car
{
public:
	PassengerCar(const std::string& name);
	friend std::ostream& operator<<(std::ostream& stream, const PassengerCar& car);
};

class CargoCar : public Car
{
public:
	CargoCar(const std::string& name);
	friend std::ostream& operator<<(std::ostream& stream, const CargoCar& car);
};

