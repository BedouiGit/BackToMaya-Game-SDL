#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED	
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_rotozoom.h>
#include "rot.h"
#include "ia.h"
#include "gamemenu.h"
#include "arduino.h"
#include "object.h"
#include "collision.h"
#include "ennemi.h"
#include "background.h"
#include "playermov.h"
#include "utility.h"
typedef struct saves
{
perso perso;
SDL_Rect camera;
ennemis ennemi;
vie vie;
}saves;
void savee(ennemis ennemi,perso perso,vie vie,SDL_Rect camera);
void load(ennemis *ennemi,perso *perso ,vie *vie,SDL_Rect *camera,int *continuer,int *save);
void game (SDL_Surface *ecran,int save,int manett);
#endif 
