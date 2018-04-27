#include <random>
#include "Coordinate.h"
#include "RandomNumberEngine.h"

Coordinate RandomNumberEngine::generateRandomCoordinate() {
	Coordinate coord;
	coord.x = distribution(generator);
	coord.y = distribution(generator);
}

int RandomNumberEngine::generateRandomNumber()
{
	return distribution(generator);
}

RandomNumberEngine::RandomNumberEngine( int width )
{
	std::uniform_int_distribution<int> distribution_(1, width - 1);
	distribution = distribution_;
}


RandomNumberEngine::~RandomNumberEngine()
{
}
