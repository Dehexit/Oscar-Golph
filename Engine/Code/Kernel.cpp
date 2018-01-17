#include "Kernel.hpp"
#include "Task.hpp"
#include <List>
#include <iostream>


Kernel::Kernel()
{
}


Kernel::~Kernel()
{
}

/*
Desde donde se añaden las tasks? Se pueden hacer de forma dinámica? En tiempo de ejecución deberían
poder modificarse las tareas? 
*/

void Kernel::add_task(Task * task)
{

}


//La clase Kernel y la clase ventana van por separado?
//Cual es la forma correcta de incluir las cabeceras?
void Kernel::execute()
{
	std::list<Task*> tasks; 
	bool exit; 
	
	while (!exit)
	{
		//Este loop recorre la lista de tareas que se hayan definido previamente?
		for (auto * Task:tasks)
		{
			//Task->run()
			std::cout << "HI" << std::endl; 
		}
	}
}