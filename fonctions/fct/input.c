#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include "input.h"

/*int arduinoWriteData(int x)
{
    char chemin[]="/dev/ttyACM0";
    FILE *f;

    f=fopen(chemin,"w");
    if(f == NULL)
        return(-1);

    fprintf(f,"%d",x);
    fclose(f);

    return(0);
}

int arduinoReadData(int *x)
{
    char chemin[]="/dev/ttyACM0";
    FILE *f;
    char c;
    f=fopen(chemin,"r");

    if(f == NULL)
        return(-1);

    fscanf(f,"%d",x);

    fclose(f);

    return(0);
}*/
void input_t(SDL_Event event,char ch[10],pos *p)
{/*int x=-1;
x=arduinoWriteData(x);
switch(x)
	{case 1:

                        	strcpy(ch,"up");

                        	break;

                    	case 2:

                        strcpy(ch,"down");

                        break;

                    	case 4:

                        strcpy(ch,"right");

                        break;

                    	case 3:

                        strcpy(ch,"left");

                        break;
		    	case 5:
			
			strcpy(ch,"return");break;
			case 6:
			strcpy(ch,"v");break;
	}*/
SDL_PollEvent(&event);
switch(event.type)
	{case SDL_QUIT:strcpy(ch,"exit");break;
	case SDL_KEYDOWN:
		{switch(event.key.keysym.sym)

                	{

                   	 case SDLK_UP:

                        	strcpy(ch,"up");

                        	break;

                    	case SDLK_DOWN:

                        strcpy(ch,"down");

                        break;

                    	case SDLK_RIGHT:

                        strcpy(ch,"right");

                        break;

                    	case SDLK_LEFT:

                        strcpy(ch,"left");

                        break;
		    	case SDLK_RETURN:
			
			strcpy(ch,"return");break;
               		 }
			case SDLK_v:
			
			strcpy(ch,"v");break;

                
		}break;
	case SDL_KEYUP:
		{switch(event.key.keysym.sym)

                	{

                   	 case SDLK_UP:

                        	strcpy(ch,"UP");

                        	break;

                    	case SDLK_DOWN:

                        strcpy(ch,"DOWN");

                        break;

                    	case SDLK_RIGHT:

                        strcpy(ch,"RIGHT");

                        break;

                    	case SDLK_LEFT:

                        strcpy(ch,"LEFT");

                        break;
		    	case SDLK_RETURN:
			
			strcpy(ch,"RETURN");break;
               		 }

                
		}break;
	case SDL_MOUSEBUTTONDOWN:
		{
			if (event.button.button == SDL_BUTTON_LEFT)
				{strcpy(ch,"cg");
				p->x=event.button.x;
				p->y=event.button.y;}
		}break;
	case SDL_MOUSEMOTION:
			{strcpy(ch,"mm");
			p->x=event.motion.x;
			p->y=event.motion.y;
			
	}break;
}
}
/*int bounding_box(SDL_Rect Personnage,SDL_Rect Ennemi)
{
if((Personnage.x<Ennemi.x)&&((Personnage.x+Personnage.w)>=Ennemi.x)&&(Personnage.y<=(Ennemi.y+Ennemi.h))&&((Personnage.y+Personnage.h)>=Ennemi.y))
return 2;
if(((Personnage.x+Personnage.w)>=Ennemi.x)&&(Personnage.x<=(Ennemi.x+Ennemi.w))&&(Personnage.y>Ennemi.y)&&(Personnage.y<=(Ennemi.y+Ennemi.h)))
return 1;
if((Personnage.x>Ennemi.x)&&(Personnage.x<=(Ennemi.x+Ennemi.w))&&(Personnage.y<=(Ennemi.y+Ennemi.h))&&((Personnage.y+Personnage.h)>=Ennemi.y))
return 4;
if((Personnage.y<Ennemi.y)&&((Personnage.y+Personnage.h)>=Ennemi.y)&&((Personnage.x+Personnage.w)>=Ennemi.x)&&(Personnage.x<=(Ennemi.x+Ennemi.w)))
return 3;
else return 0;
}*/
