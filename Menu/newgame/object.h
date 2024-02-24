#ifndef OBJECT_H_INCLUDED
#define OBJECT_H_INCLUDED
#include "fonction.h"
typedef struct 
{
SDL_Surface *image ; 
SDL_Rect position ; 

} Objet ; 

void initialiserObj( Objet *obj , char name[] , int x , int y ) ; 
void affichageObj ( Objet obj , SDL_Surface *screen,SDL_Rect camera) ;
void freesurfaceobject(Objet *obj);


#endif 
