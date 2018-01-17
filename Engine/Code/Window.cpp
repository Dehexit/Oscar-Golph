
// COMENTARIO DE CABECERA

#include <SDL.h>
#include <Window.hpp>

namespace engine
{

	Window::Window(const std::string & title, int width, int height)
	{
		if (!SDL_WasInit(SDL_INIT_VIDEO))
		{
			SDL_Init (SDL_INIT_VIDEO);
		}

		windowt = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL);
		this->wintitle = SDL_GetWindowTitle(windowt); 
	}

	Window::~Window()
	{
		SDL_DestroyWindow(this->windowt);
	}

}