#include <Scene.hpp>
#include <Window.hpp>
#include <Entity.hpp>
#include <Kernel.hpp>
#include <iostream>
#include <string>
#include <map>



std::map< std::string, Entity*> entities; 
Kernel kernel; 


Scene::Scene()
{
}


Scene::~Scene()
{

}


//Change class. It's a debug one. 
void Scene::link_window(Window window)
{
	std::cout << "Window name: " << window.wintitle << std::endl;
}


void Scene::execute()
{
	kernel.execute(); 
}