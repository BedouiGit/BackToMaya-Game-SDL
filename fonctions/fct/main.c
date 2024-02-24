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


  Acteurs acteurs,acteurs1;
  Boutons boutons;
  Hero hero,hero1 ;
  Enemy enemy,enemy1;
  

   //initialisations
    if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
    {
        return 1;
    }

 SDL_ShowCursor(SDL_DISABLE);
  
/* appel des fonctions */

acteurs.screen= SDL_SetVideoMode(1600,600,32,SDL_HWSURFACE | SDL_DOUBLEBUF);
SDL_WM_SetCaption( "THE MYSTERIOUS ISLAND", NULL );

    initializeHero(&hero);
    initializeEnemy(&enemy);
    initialisation(&acteurs);
    update_points_de_collision(&hero);



    initializeHero(&hero1);
	hero1.x=800;
    initializeEnemy(&enemy1);
	enemy.x = 2372 ;
	enemy.y =1222 ;

	enemy.x2 = 3161 ;
	enemy.y2 = 981 ;

	enemy.x3 = 3883 ;
	enemy.y3 = 1222 ;
    
        enemy.x4 = 8263 ;
	enemy.y4 = 1222 ;
    initialisation(&acteurs1);
    update_points_de_collision(&hero1);

    
    init_splitscreen(&acteurs.posFond,&acteurs1.posFond,800);
    drawHero(hero, &acteurs);
    drawEnemy(enemy , &acteurs);
    draw_life_bar(&hero  , &acteurs);
    
    drawHero(hero1, &acteurs1);
    drawEnemy(enemy1 , &acteurs1);
    draw_life_bar(&hero1  , &acteurs1);


    
int carryon = 1;
while(carryon)
{        


        start=SDL_GetTicks();
                

        if (hero.vies == 0)
        {

        carryon=0 ;

        }

        intelligence_artificielle(&enemy,acteurs ,&hero);
	intelligence_artificielle(&enemy1,acteurs1 ,&hero1);//2eme perso

        SDL_PollEvent(&acteurs.event);
	SDL_PollEvent(&acteurs1.event);

        animationhero(&hero, acteurs);
        updatePlayer(&hero , &acteurs);
	
	animationhero(&hero1, acteurs1);
        updatePlayer(&hero1 , &acteurs1);

        centerScrollingOnPlayer(&hero, &acteurs);

	centerScrollingOnPlayer(&hero1, &acteurs1);


        drawHero(hero , &acteurs) ;

        drawEnemy(enemy , &acteurs) ;

        drawEnemy2(enemy , &acteurs) ;

        drawEnemy3(enemy , &acteurs) ;

        drawEnemy4( enemy ,  &acteurs) ;

        draw_life_bar(&hero  , &acteurs);

        SDL_Flip(acteurs.screen);

        drawEnemy2(enemy1 , &acteurs1) ;

	drawHero(hero1 , &acteurs1) ;

    //    drawEnemy(enemy1 , &acteurs1) ;

  //      drawEnemy3(enemy1 , &acteurs1) ;

//        drawEnemy4( enemy1 ,  &acteurs1) ;

    //    draw_life_bar(&hero1  , &acteurs1);

  //  SDL_Flip(acteurs1.screen);



    switch(acteurs.event.type)
    {
        case SDL_QUIT:
             carryon = 0;
        case SDL_KEYDOWN:
            if(acteurs.event.key.keysym.sym == SDLK_ESCAPE)
                {
                    carryon= 0;
                }
            break;

    }


if ( 1000/FPS > SDL_GetTicks()-start )
        {
            SDL_Delay( 1000/FPS - (SDL_GetTicks()-start)) ;
        }

}

enigme E;
int val=1;

affichage(&E,val);

    //LIB
    SDL_Quit();
    return 0 ;

}

