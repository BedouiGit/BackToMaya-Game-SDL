#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "fonctions.h"


int main(int argc, char const *argv[])
{
  
  Uint32 start ;
  const int FPS= 60;


  Acteurs acteurs;
  Boutons boutons;
  Hero hero ;
  Enemy enemy ;
  

   //initialisations
    if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
    {
        return 1;
    }

 SDL_ShowCursor(SDL_DISABLE);
  
/* appel des fonctions */

acteurs.screen= SDL_SetVideoMode(800,600,32,SDL_HWSURFACE | SDL_DOUBLEBUF);
SDL_WM_SetCaption( "THE MYSTERIOUS ISLAND", NULL );

    initializeHero(&hero);
    
    initialisation(&acteurs);
    


    drawHero(hero, &acteurs);
    










    //LIB
	SDL_Quit();
	return 0 ;

}






