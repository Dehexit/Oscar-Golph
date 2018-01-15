#pragma once
class Kernel
{
public:
	Kernel();
	~Kernel();

	void execute();
	void add_task(Task *); 
};

