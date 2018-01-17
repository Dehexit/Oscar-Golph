#pragma once
#include "Task.hpp"
#include <iostream>
#include <vector>
#include <memory>

class Task_Input : public Task 
{
public:
	Task_Input();
	~Task_Input();

	std::shared_ptr<Task_Input*> task_input; 

	void run() override;
	const std::shared_ptr <Task_Input*> get_task();
};

