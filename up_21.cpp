#include "car.h"
#include <random>

std::unique_ptr<Car> CreateRandomCar()
{
	static std::mt19937 eng{ std::random_device{}() };
	static std::uniform_int_distribution<int> dist{ 0, 5 };

	switch (dist(eng)) {
		case 0: return std::make_unique<Mercedes>();
		case 1: return std::make_unique<Audi>();
		case 2: return std::make_unique<Fiat>();
		case 3: return std::make_unique<Renault>();
		case 4: return std::make_unique<Mercedes_S500>();
		case 5: return std::make_unique<Bmw>();
	}

	return nullptr;
}
