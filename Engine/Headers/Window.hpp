
// COMENTARIO DE CABECERA

#pragma once

#include <string>
#include <memory>

struct SDL_Window;

namespace engine
{

	class Window
	{

		SDL_Window *window;

	public:

		Window(const std::string & title, int width, int height);
	   ~Window();

	};

}