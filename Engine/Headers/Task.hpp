#pragma once
#include <string>


class Task
{
public:
	Task();
	
	virtual void run(); 

	std::string name;
};

