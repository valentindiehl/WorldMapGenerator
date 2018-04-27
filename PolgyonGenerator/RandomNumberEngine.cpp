#include <iostream>
#include <fstream>
#include <random>
#include "Coordinate.h"
#include "RandomNumberEngine.h"

void RandomNumberEngine::generatePointCloudMap(int pointCount_) {
	pointCount = pointCount_;
	std::ofstream pointCloudFile;
	pointCloudFile.open("pointCloud.vd");
	if (pointCloudFile.is_open()) {
		for (int i = 0; i < pointCount; i++) {
			pointCloudFile << distribution(generator) << ", " << distribution(generator);
			pointCloudFile << "\n";
		}
		pointCloudFile.close();
	}
}

struct Coordinate RandomNumberEngine::generateRandomCoordinate() {
	Coordinate coord;
	coord.x = distribution(generator);
	coord.y = distribution(generator);
	return coord;
}

int RandomNumberEngine::generateRandomNumber()
{
	return distribution(generator);
}

RandomNumberEngine::RandomNumberEngine( int width_ )
{
	width = width_;
	std::uniform_int_distribution<int> distribution_(1, width - 1);
	distribution = distribution_;
}


RandomNumberEngine::~RandomNumberEngine()
{
}
