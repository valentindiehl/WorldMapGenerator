// PolgyonGenerator.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include "RandomNumberEngine.h"


int main()
{
	RandomNumberEngine * rand = new RandomNumberEngine(1024);
	rand->generatePointCloudMap(1024);
	delete(rand);
    return 0;
}

