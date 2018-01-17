#pragma once
//Las task se añaden desde la clase Scene 
#include <Task.hpp>
#include <list>


class Kernel
{
public:
	Kernel();
	~Kernel();
	
	void execute();
	void add_task(Task *); 
	void set_task_list(); 
	std::list <Task*> get_task_list();

	
	/*
		Necesito tener en cuenta, trackear la lista de Tasks. La hago como propiedad de clase o lo dejo
		declarado de forma local en execute(), tal y como esta?
	*/

	std::list<Task*> tasklistglobal;
};

