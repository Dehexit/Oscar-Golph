// COMENTARIO DE CABECERA

#include <iostream>
#include <Window.hpp>
#include <Scene.hpp>

using namespace engine;

int _main (int , char ** )
{
	Window window("Practica de Motores Gráficos y Plugins", 1024, 768);
	Scene scene;
	/*
	Aqui como trato en paralelo el tener la ventana abierta y el kernel por detras, llamando a las funciones que necesitan ser llamadas una sola vez?
	Si meto en este exacta línea el código que sea, va a seguir hasta el bucle de kernel, pero no va a salir nunca de ahi. Como se queda atascado en 
	ese bucle nunca va a llegar al bucle de la ventana. 
	Por ello, habria que encontrar una forma de hacer que los bucles se ejecuten en paralelo.
	//scene.link_window(window);

	*/
	while (true)
	{

	}
	return 0; 
}
