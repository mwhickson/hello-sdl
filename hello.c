#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

int
main (int argc, char* argv[])
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL_Init(video) failed\n");
		return EXIT_FAILURE;
	}

	SDL_Window* window = SDL_CreateWindow(
		"Hello", 
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
		640, 480, 
		0
	);

	if (!window)
	{
		printf("SDL window creation failure\n");
		return EXIT_FAILURE;
	}

	SDL_Surface* surface = SDL_GetWindowSurface(window);

	if (!surface)
	{
		printf("SDL surface retrieval failure\n");
		return EXIT_FAILURE;
	}

	SDL_UpdateWindowSurface(window);
	
	SDL_Delay(5000);

	return EXIT_SUCCESS;
}
