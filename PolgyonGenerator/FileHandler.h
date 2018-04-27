#pragma once
class FileHandler
{
public:
	std::ofstream openFile(std::string filename);
	FileHandler();
	~FileHandler();
};

