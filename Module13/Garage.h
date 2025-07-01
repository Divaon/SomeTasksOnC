#pragma once
#include <vector>


template <typename T>
class Garage
{
public:
	void AddToGarage(T* car)
	{
		Cars.push_back(car);
	};
	void DisplayAll()
	{
		for (const auto& car : Cars) {
			std::cout << *car << std::endl;
		}
	};

	~Garage()
	{
		Cars.clear();
	}
private:
	std::vector<T*> Cars;
};

