#include "fonction.h"
void gamemenu(SDL_Surface *ecran,ennemis ennemi,perso perso,vie vie,SDL_Rect camera)
{
SDL_Surface *image=NULL,*image1=NULL,*image2=NULL,*image3=NULL,*image4=NULL,*image5=NULL,*image6=NULL,*image7=NULL;
image= IMG_Load("../newgame/ingame/0.png");
image1= IMG_Load("../newgame/ingame/1.png");
image2= IMG_Load("../newgame/ingame/2.png");
image3= IMG_Load("../newgame/ingame/3.png");
image4= IMG_Load("../newgame/ingame/4.png");
image5= IMG_Load("../newgame/ingame/NOPE.png");
image6= IMG_Load("../newgame/ingame/YES.png");
image7= IMG_Load("../newgame/menures/menu0.png");
SDL_Event event;
SDL_Rect position;
position.x=350;
position.y=150;
SDL_BlitSurface(image,NULL, ecran,&position);
SDL_Flip(ecran);
int cont =1;
int i=0;
while(cont){
SDL_PollEvent(&event);
switch(event.type)
{
case SDL_KEYDOWN:
switch(event.key.keysym.sym)
            {
            case SDLK_RETURN: 
			if(i==1){	
	 cont=0;
break;

   	   		}
   	             else if (i==2)
   	             {
game(ecran,0,0);
	
			}
                else if (i==3)
   	             {
                    
   	             }else if (i==4)
   	             {
savee(ennemi,perso,vie,camera);
cont=0;
      SDL_BlitSurface(image7,NULL, ecran,0);
SDL_Flip(ecran);    
   	        updateMenu(ecran); 
       break; 
   	             }

              break;

            case SDLK_DOWN:
                i++;
                if(i==5)
                {
                    i=1;
                
                }
                if(i==1)
                {
SDL_BlitSurface(image1,NULL, ecran,&position);
SDL_Flip(ecran);
SDL_Delay(100);
                }
                if(i==2)
                {     
SDL_BlitSurface(image2,NULL, ecran,&position);
SDL_Flip(ecran);           
SDL_Delay(100);}
                if(i==3)
                {
SDL_BlitSurface(image3,NULL, ecran,&position);
SDL_Flip(ecran);
SDL_Delay(100);                }if(i==4)
                {
           SDL_BlitSurface(image4,NULL, ecran,&position);
SDL_Flip(ecran);     
SDL_Delay(100);}
   
                break;
            case SDLK_UP: 
                i--;
                if(i<0)
                {
                 	   i=4;
                }
                
                if(i==1)
                {
SDL_BlitSurface(image1,NULL, ecran,&position);
SDL_Flip(ecran);
                SDL_Delay(100);}
                if(i==2)
                {

SDL_BlitSurface(image2,NULL, ecran,&position);
SDL_Flip(ecran);
SDL_Delay(100);                }
                if(i==3)
                {
SDL_BlitSurface(image3,NULL, ecran,&position);
SDL_Flip(ecran);                SDL_Delay(100);}
   if(i==4)
                {
           SDL_BlitSurface(image4,NULL, ecran,&position);
SDL_Flip(ecran);    SDL_Delay(100); }
                break;        
}
}
 
}




}
