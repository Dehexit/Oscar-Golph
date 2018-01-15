
// COMENTARIO DE CABECERA

int _main (int, char **);


extern "C"
{

	int SDL_main(int, char **)
	{
		return _main (0, nullptr);
	}

}
