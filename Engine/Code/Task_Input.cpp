#include "Task_Input.hpp"



Task_Input::Task_Input()
{
}


Task_Input::~Task_Input()
{
}


void Task_Input::run()
{
	std::cout << "Este es el componente Task_Input ejecutandose" << std::endl; 
}

std::shared_ptr<Task_Input*> const Task_Input::get_task()
{
	return this->task_input; 
}