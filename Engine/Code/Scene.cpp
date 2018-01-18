#include <Scene.hpp>
#include <Window.hpp>
#include <Entity.hpp>
#include <Kernel.hpp>
#include <iostream>
#include <string>
#include <map>
#include <rapidxml.hpp>


Kernel kernel; 


Scene::Scene()
{
	//load y leer su contenido (el del xml). Usar rapidxml, le passa el contenido y lo interpreta. 
}


Scene::~Scene()
{

}


//Carga de xml 
void Scene::load()
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