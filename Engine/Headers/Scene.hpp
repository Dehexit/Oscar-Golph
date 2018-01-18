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
	
	/*
	La función link window forma parte del kernel de tareas. Quitar cuando se pueda.
	CHANGE
	*/


	//La edsscena tiene un mapa de entidades. La key es el nombre de la entidad.
	std::map< std::string, std::shared_ptr<Entity>> entities;

	void link_window(Window window);
	void execute(); 
	void load(); 

};

