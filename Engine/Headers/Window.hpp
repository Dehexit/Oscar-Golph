
// COMENTARIO DE CABECERA

#pragma once

#include <string>
#include <memory>

struct SDL_Window;

namespace engine
{

	class Window
	{

		SDL_Window *windowt;
		

	public:

		Window(const char * title, int width, int height);
	   ~Window();

	   const char * wintitle;

	};

}