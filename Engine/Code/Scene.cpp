#include <Scene.hpp>
#include <iostream>
#include <rapidxml_utils.hpp>
#include "rapidxml.hpp"


Kernel kernel; 


Scene::Scene(std::string & file_path)
{
	//load y leer su contenido (el del xml). Usar rapidxml, le pasa el contenido y 
	//lo interpreta. 

	//como hacer comprobacion de que se le ha pasado la ruta correcta?
	rapidxml::file <> xmlfile(file_path.c_str());
	//std::fstream streamfile(xmlfile,std::fstream::in);
	if (streamfile.good())
	{

	}


}


Scene::~Scene()
{

}


//Carga de xml 
void Scene::load()
{

}



void Scene::execute()
{
	kernel.execute(); 
}