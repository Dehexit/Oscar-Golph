#include "Kernel.hpp"
#include "Task.hpp"
#include <List>
#include <iostream>


Kernel::Kernel()
{
	//TODO
}


Kernel::~Kernel()
{
}

/*
Desde donde se a�aden las tasks? Se pueden hacer de forma din�mica? En tiempo de ejecuci�n deber�an
poder modificarse las tareas? 
*/


//Aqui es donde se ve que necesito la lista como una variable de la clase, al necesitar acceder a ella desde otro m�todo. 
void Kernel::add_task(Task * task)
{
	//TODO
}



//La clase Kernel y la clase ventana van por separado?
//Cual es la forma correcta de incluir las cabeceras?
void Kernel::execute()
{
	bool exit;
	exit = true; 
	while (!exit)
	{
		std::cout << "Hasta aqui" << std::endl; 
		std::list<Task*> tasks;
		
		for (auto * Task : this->tasklistglobal)
		{
			//Task->run()
			std::cout << "HI" << std::endl; 
		}
	}
}