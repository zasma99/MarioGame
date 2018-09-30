
#include "define.h"
#include "genvars.h"

SDL_Surface* init_SDL()
{
	/* initialize SDL */
	SDL_Init(SDL_INIT_VIDEO);

	/* set the title bar */
	SDL_WM_SetCaption(WIN_TITLE, WIN_TITLE);

	/* create window */
	SDL_Surface* screen = (SDL_Surface*)malloc(sizeof(SDL_Surface*));
	screen = SDL_SetVideoMode(SCREEN_WIDTH,SCREEN_HEIGHT, 32, SDL_HWSURFACE);
	/*set keyboard repeat */
	SDL_EnableKeyRepeat(10, 10);

	localEnv.screen = screen;
	return screen;
	

}
void arret()
{
    int cont = 1;
    SDL_Event event;
 
    while (cont)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                cont = 0;
        }
    }
}
int main(){
  init_SDL();
  SDL_FillRect(localEnv.screen, NULL, SDL_MapRGB(localEnv.screen->format, 0, 0, 0)); // CLEAR EVERYTHING
  SDL_BlitSurface(localEnv.frame, NULL, localEnv.screen, NULL); // draw background 
  SDL_UpdateRect(localEnv.screen, 0, 0, 0, 0);
  arret ();
  SDL_Quit();
 
  return 0;
}
