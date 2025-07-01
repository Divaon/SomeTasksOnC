
#include <iostream>
#include "Car.h"
#include "ServiceStation.h"

int main()
{
	CargoCar cargocar1("Cargo 1");
	CargoCar cargocar2("Cargo 2");
	CargoCar cargocar3("Cargo 3");
	CargoCar cargocar4("Cargo 4");
	CargoCar cargocar5("Cargo 5");
	CargoCar cargocar6("Cargo 6");

	PassengerCar passcar1("Passenger 1");
	PassengerCar passcar2("Passenger 2");
	PassengerCar passcar3("Passenger 3");
	PassengerCar passcar4("Passenger 4");
	PassengerCar passcar5("Passenger 5");
	PassengerCar passcar6("Passenger 6");

	std::vector<CargoCar> CargoCarList = {
		cargocar1, cargocar2, cargocar3,
		cargocar4, cargocar5, cargocar6
	};

	std::vector<PassengerCar> PassengerCarList = {
		passcar1, passcar2, passcar3,
		passcar4, passcar5, passcar6
	};

	ServiceStatuion<PassengerCar> PassengerCarStation;
	ServiceStatuion<CargoCar> CargoCarStation;

	for (const auto& car : CargoCarList) {
		std::cout << car << std::endl;
	}

	for (const auto& car : PassengerCarList) {
		std::cout << car << std::endl;
	}

	std::cout << std::endl;

	for (auto& car : PassengerCarList) {
		PassengerCarStation.AddCar(&car);
	}

	for (auto& car : CargoCarList) {
		CargoCarStation.AddCar(&car);
	}

	std::cout << std::endl;

	PassengerCarStation.RepairAll();
	CargoCarStation.RepairAll();

	PassengerCarStation.DisplayGarage();
	CargoCarStation.DisplayGarage();

	std::cout << std::endl;

	for (const auto& car : CargoCarList) {
		std::cout << car << "\n";
	}

	for (const auto& car : PassengerCarList) {
		std::cout << car << "\n";
	}
}

