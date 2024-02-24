#ifndef ENNEMI_H_INCLUDED
#define ENNEMI_H_INCLUDED
#include "playermov.h"
typedef struct ennemis
{
	SDL_Rect position;
	SDL_Rect position2;
	SDL_Surface *fond;
	SDL_Surface *fond1;
	SDL_Surface *fond2;
	SDL_Surface *fond3;
	SDL_Surface *fond4;
	SDL_Surface *fonda;
	SDL_Surface *fondb;
	SDL_Surface *fondc;
	SDL_Surface *fondd;
	int active;
	int posmin,posmax;
	int mvmspeed;
	int z,x;
}ennemis;

void initialiserennemi(ennemis *ennemi,int posmax,int posmin);
void freesurfaceennemi(ennemis *ennemi);
ennemis mouvennemi(ennemis ennemi,perso perso,SDL_Rect camera,SDL_Surface *ecran,int *lastpos,int *y);
int splitennemi(int y);
void afficherennemi(ennemis ennemi,SDL_Surface *ecran,int y,SDL_Rect camera);
void attacking(SDL_Rect *position,int *i);
#endif 
