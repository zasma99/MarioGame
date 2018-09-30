#include "define.h"
typedef struct GeneralEnv
{
	SDL_Surface* screen;
	SDL_Surface* frame;
} GeneralEnviroment;

GeneralEnviroment localEnv;

SDL_Surface* init_SDL();
void remove_SDL();
