#pragma once
#include "Garage.h"
#include <iostream>

template <typename T>
class ServiceStatuion
{
public:
	void AddCar(T* car)
	{
		if (Cars.size() < _limit)
		{
			Cars.push_back(car);
		}
		else
		{
			std::cout << "Service Statuion is full. Unposible take more cars" << std::endl;
		}
	}
	void DisplayGarage()
	{
		_garage.DisplayAll();
	}
	void RepairAll()
	{
		for (const auto& car : Cars) {
			car->Repair();
			_garage.AddToGarage(car);
		}
		Cars.clear();
	}
	~ServiceStatuion()
	{
		Cars.clear();
	}

private:
	Garage<T> _garage;
	std::vector<T*> Cars;
	int _limit = 5;
};
