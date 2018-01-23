#include "Kernel.hpp"
#include "Task.hpp"
#include <List>
#include <iostream>


Kernel::Kernel()
{
	//TODO
	this->tasklistglobal = std::list<Task*>(); 
	Task *newtask = new Task();

	this->add_task(newtask);

}


Kernel::~Kernel()
{
}

/*
Desde donde se añaden las tasks? Se pueden hacer de forma dinámica? En tiempo de ejecución deberían
poder modificarse las tareas? 
*/


//Aqui es donde se ve que necesito la lista como una variable de la clase, al necesitar acceder a ella desde otro método. 
void Kernel::add_task(Task * task)
{
	this->tasklistglobal.push_back(task);
}



//La clase Kernel y la clase ventana van por separado?
//Cual es la forma correcta de incluir las cabeceras?
void Kernel::execute()
{
	bool exit;
	exit = false; 
	while (!exit)
	{
		if (tasklistglobal.empty())
		{
			std::cout << "Task list empty" << std::endl;
		}

		else
		{
			for (auto & task : this->tasklistglobal)
			{
				//std::cout << task->name << std::endl;

				//Task->run()
			}
		}
	}
}