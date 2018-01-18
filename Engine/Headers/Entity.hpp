#pragma once
#include <map>
#include <list>
#include <string>
#include <Component.hpp>

//Una entidad es un contenedor de componentes
//La clase entidad tiene un mapa de componentes

class Entity
{
public:
	Entity();
	~Entity();

	std::map< std::string, Component * > components;
	std::list< Entity * > children;

};

