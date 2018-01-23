#pragma once
//Recibir un puntero de la clase Window 
//Kernel por escena. Añadir al crear la escena
//Al cargar el xml se determian que modulos son necesarios dentro de esa escena. Se crean esos modulos y se añaden al kernel sus tareas si las tienen. 

#include <Window.hpp>
#include <Entity.hpp>
#include <Kernel.hpp>
#include <string>
#include <memory>
#include <map>


using namespace engine;


class Scene
{

public:
	std::vector<std::string> xmldata; 
	std::map< std::string, std::shared_ptr<Entity>> entities;
	Kernel kernel; 


	Scene(std::string & file_path);
	~Scene();
	

	//La edsscena tiene un mapa de entidades. La key es el nombre de la entidad.
	void execute(); 
	void load(); 

};

