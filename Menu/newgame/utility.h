#ifndef UTILITY_H_INCLUDED
#define UTILITY_H_INCLUDED
#include "fonction.h"
int collisionbb( SDL_Rect posj , SDL_Rect posobj,SDL_Rect camera ); 
int  collisionpit(int debut[],int fin[],int * gravity,int n,SDL_Rect posj,SDL_Rect camera );
int collisionplatform(int debut[],int fin[],int *gravity,int n,SDL_Rect posj,SDL_Rect camera ,int haut[]);
#endif 
