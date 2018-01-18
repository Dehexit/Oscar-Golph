#pragma once
class Component
{
public:
	Component();
	~Component();

	virtual void initialize() = 0;
	virtual void update() = 0;

};

