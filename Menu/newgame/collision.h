#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED
#include "playermov.h"
#include "ennemi.h"
Uint32 getpixel(SDL_Surface *surface, int x, int y);
SDL_Rect collision(SDL_Rect camera);
void collisionennemi(perso *perso,ennemis *ennemi,SDL_Rect *camera,vie *vie);
void Health(vie *vie,int x[],SDL_Rect *camera,SDL_Rect *perso,SDL_Rect *enemie,int n );
#endif 
