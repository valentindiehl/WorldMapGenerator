#pragma once
class RandomNumberEngine
{
public:

	int generateRandomNumber();
	Coordinate generateRandomCoordinate();
	RandomNumberEngine( int width );
	~RandomNumberEngine();
private:
	std::random_device generator;
	std::uniform_int_distribution<int> distribution;
};

