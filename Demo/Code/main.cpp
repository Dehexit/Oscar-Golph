// COMENTARIO DE CABECERA

#include <iostream>
#include <Window.hpp>
#include <Scene.hpp>

using namespace engine;

int _main (int , char ** )
{
	//Window window("Practica de Motores Gráficos y Plugins", 1024, 768);
	/*
		Se llama a la ruta desde la path de Scene.cpp, que es donde se hace la llamada como 
		tal. Desde la linea a continuación de código sólo se le pasa el argumento. 
	*/
	std::string file_path= "../../Resources/Scene1.xml";
	Scene scene(file_path);
	/*
		Aqui como trato en paralelo el tener la ventana abierta y el kernel por detras, llamando a las funciones que necesitan ser llamadas una sola vez?
		Si meto en este exacta línea el código que sea, va a seguir hasta el bucle de kernel,
		pero no va a salir nunca de ahi. Como se queda atascado en 
		ese bucle nunca va a llegar al bucle de la ventana. 
		Por ello, habria que encontrar una forma de hacer que los bucles se ejecuten en 
		paralelo.
	*/

	/*
		CONTESTACIÓN: crear la ventana y pintar en la ventana lo que hay que pintar es
		responsabilidad del componente renderer. Actualiza la superifice, hace el swap 
		de buffers... 
	*/

	scene.execute();
	return 0; 
}
