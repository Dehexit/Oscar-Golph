#pragma once
//Recibir un puntero de la clase Window 
//Kernel por escena. Añadir al crear la escena
//Al cargar el xml se determian que modulos son necesarios dentro de esa escena. Se crean esos modulos y se añaden al kernel sus tareas si las tienen. 

#include "Window.hpp"
#include <string>
#include <memory>

using namespace engine;


class Scene
{

public:
	Scene();
	~Scene();
	
	void link_window(Window window);
	void parse_component(std::string scene); 
	

};

