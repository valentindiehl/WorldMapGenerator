#pragma once
#include <random>

class RandomNumberEngine
{
public:
	void generatePointCloudMap( int pointCount);
	int generateRandomNumber();
	struct Coordinate generateRandomCoordinate();
	RandomNumberEngine( int width );
	~RandomNumberEngine();
private:
	int width;
	int pointCount;
	std::mt19937 generator;
	std::uniform_int_distribution<int> distribution;
};

