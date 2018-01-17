#pragma once
//Las task se añaden desde la clase Scene 
#include "Task.hpp"



class Kernel
{
public:
	Kernel();
	~Kernel();
	
	void kernel_init(); 
	void execute();
	void add_task(Task *); 
};

