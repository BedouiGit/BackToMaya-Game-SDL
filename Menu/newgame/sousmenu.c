#include<stdio.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_mixer.h"
 #include"Menu1.h"
void sousmenu(SDL_Surface *ecran,int *volume,int *mode,int *manette){
SDL_Surface *image=NULL,*image1=NULL,*image2=NULL,*image3=NULL,*image4=NULL,*image5=NULL,*image6=NULL,*image7=NULL,*image8=NULL,*image9=NULL;
image= IMG_Load("../newgame/menures/sousmenu4.png");
image2= IMG_Load("../newgame/menures/sousmenu2.png");
image3= IMG_Load("../newgame/menures/sousmenu3.png");
image4= IMG_Load("../newgame/menures/sousmenu4.png");
image5= IMG_Load("../newgame/menures/bone.png");
image6= IMG_Load("../newgame/menures/ON.png");
image7= IMG_Load("../newgame/menures/OFF.png");
image8= IMG_Load("../newgame/menures/Controller.png");
image9= IMG_Load("../newgame/menures/keyboard+mouse.png");
image1= IMG_Load("../newgame/menures/menu2.png");
SDL_Event event;
SDL_Rect positionbone1,posmode,posmanette;
positionbone1.x=0;
positionbone1.y=0;
posmode.x=1040;
posmode.y=390;
posmanette.x=990;
posmanette.y=570;
int i=0;
int cont =1;
 if((*volume)==2)
SDL_BlitSurface(image4,NULL, ecran,0);
else if((*volume)==1)
SDL_BlitSurface(image3,NULL, ecran,0);
else if((*volume)==0)
SDL_BlitSurface(image2,NULL, ecran,0);
if((*mode)==0)
SDL_BlitSurface(image7,NULL, ecran,&posmode);
else if((*mode)==1)
SDL_BlitSurface(image6,NULL, ecran,&posmode);
if((*manette)==0)
SDL_BlitSurface(image8,NULL, ecran,&posmanette);
else if((*manette)==1)
SDL_BlitSurface(image9,NULL, ecran,&posmanette);
                   SDL_Flip(ecran);               
while(cont){
printf("i=%d\n",i);
SDL_PollEvent(&event);
switch(event.type)
{                  
case SDL_KEYDOWN:
switch(event.key.keysym.sym)
            {
	case SDLK_LEFT :
	if (i==1)
                {
(*volume)--;
if((*volume)<0)
(*volume)=0;
 
 if((*volume)==2)
SDL_BlitSurface(image4,NULL, ecran,0);
                         
else if((*volume)==1)
SDL_BlitSurface(image3,NULL, ecran,0);

else if((*volume)==0)
SDL_BlitSurface(image2,NULL, ecran,0);

if((*mode)==0)
SDL_BlitSurface(image7,NULL, ecran,&posmode);
else if((*mode)==1)
SDL_BlitSurface(image6,NULL, ecran,&posmode);
if((*manette)==0)
SDL_BlitSurface(image8,NULL, ecran,&posmanette);
else if((*manette)==1)
SDL_BlitSurface(image9,NULL, ecran,&posmanette);
positionbone1.x=650;
positionbone1.y=237;
SDL_BlitSurface(image5,NULL, ecran,&positionbone1);
       SDL_Delay(100);}else if (i==2){
(*mode)--;
if((*mode)<0)
(*mode)=0;

 if((*volume)==2)
SDL_BlitSurface(image4,NULL, ecran,0);
                         
else if((*volume)==1)
SDL_BlitSurface(image3,NULL, ecran,0);

else if((*volume)==0)
SDL_BlitSurface(image2,NULL, ecran,0);

if((*mode)==0)
SDL_BlitSurface(image7,NULL, ecran,&posmode);
else if((*mode)==1)
SDL_BlitSurface(image6,NULL, ecran,&posmode);
if((*manette)==0)
SDL_BlitSurface(image8,NULL, ecran,&posmanette);
else if((*manette)==1)
SDL_BlitSurface(image9,NULL, ecran,&posmanette);
positionbone1.x=650;
positionbone1.y=462;
SDL_BlitSurface(image5,NULL, ecran,&positionbone1);

	
                }
                else if (i==3)
                {
(*manette)--;
if((*manette)<0)
(*manette)=0;

 if((*volume)==2)
SDL_BlitSurface(image4,NULL, ecran,0);
                         
else if((*volume)==1)
SDL_BlitSurface(image3,NULL, ecran,0);

else if((*volume)==0)
SDL_BlitSurface(image2,NULL, ecran,0);

if((*mode)==0)
SDL_BlitSurface(image7,NULL, ecran,&posmode);
else if((*mode)==1)
SDL_BlitSurface(image6,NULL, ecran,&posmode);
if((*manette)==0)
SDL_BlitSurface(image8,NULL, ecran,&posmanette);
else if((*manette)==1)
SDL_BlitSurface(image9,NULL, ecran,&posmanette);

positionbone1.x=650;
positionbone1.y=625;
SDL_BlitSurface(image5,NULL, ecran,&positionbone1);
            
		}
                break;
		case SDLK_RIGHT :
		if(i==1)
                { 
(*volume)++;
if((*volume)>2)
(*volume)=2;

 if((*volume)==2)
SDL_BlitSurface(image4,NULL, ecran,0);
                         
else if((*volume)==1)
SDL_BlitSurface(image3,NULL, ecran,0);

else if((*volume)==0)
SDL_BlitSurface(image2,NULL, ecran,0);

if((*mode)==0)
SDL_BlitSurface(image7,NULL, ecran,&posmode);
else if((*mode)==1)
SDL_BlitSurface(image6,NULL, ecran,&posmode);
if((*manette)==0)
SDL_BlitSurface(image8,NULL, ecran,&posmanette);
else if((*manette)==1)
SDL_BlitSurface(image9,NULL, ecran,&posmanette);
positionbone1.x=650;
positionbone1.y=237;
SDL_BlitSurface(image5,NULL, ecran,&positionbone1);
                   SDL_Flip(ecran);               
SDL_Delay(100);
                }
                else if (i==2)
                {
(*mode)++;
if((*mode)>1)
(*mode)=1;	

 
 if((*volume)==2)
SDL_BlitSurface(image4,NULL, ecran,0);
                         
else if((*volume)==1)
SDL_BlitSurface(image3,NULL, ecran,0);

else if((*volume)==0)
SDL_BlitSurface(image2,NULL, ecran,0);

if((*mode)==0)
SDL_BlitSurface(image7,NULL, ecran,&posmode);
else if((*mode)==1)
SDL_BlitSurface(image6,NULL, ecran,&posmode);
if((*manette)==0)
SDL_BlitSurface(image8,NULL, ecran,&posmanette);
else if((*manette)==1)
SDL_BlitSurface(image9,NULL, ecran,&posmanette);
positionbone1.x=650;
positionbone1.y=462;
SDL_BlitSurface(image5,NULL, ecran,&positionbone1);



                   SDL_Flip(ecran);               


       

                }
                else if (i==3)
                {
(*manette)++;
if((*manette)>1)
(*manette)=1;	
              

 if((*volume)==2)
SDL_BlitSurface(image4,NULL, ecran,0);
                         
else if((*volume)==1)
SDL_BlitSurface(image3,NULL, ecran,0);

else if((*volume)==0)
SDL_BlitSurface(image2,NULL, ecran,0);

if((*mode)==0)
SDL_BlitSurface(image7,NULL, ecran,&posmode);
else if((*mode)==1)
SDL_BlitSurface(image6,NULL, ecran,&posmode);
if((*manette)==0)
SDL_BlitSurface(image8,NULL, ecran,&posmanette);
else if((*manette)==1)
SDL_BlitSurface(image9,NULL, ecran,&posmanette);

positionbone1.x=650;
positionbone1.y=625;
SDL_BlitSurface(image5,NULL, ecran,&positionbone1);



                   SDL_Flip(ecran);               

  }
                break;
			break ; 

            case SDLK_BACKSPACE: 
      SDL_BlitSurface(image1,NULL, ecran,0);
cont=0;           

                    SDL_Flip(ecran);
           
	break;

		 case SDLK_DOWN:
                i++;
                if(i==4)
                {
                    i=1;

   
                               

                }
                if(i==1)
                {
     
 if((*volume)==2)
SDL_BlitSurface(image4,NULL, ecran,0);
                         
else if((*volume)==1)
SDL_BlitSurface(image3,NULL, ecran,0);

else if((*volume)==0)
SDL_BlitSurface(image2,NULL, ecran,0);

if((*mode)==0)
SDL_BlitSurface(image7,NULL, ecran,&posmode);
else if((*mode)==1)
SDL_BlitSurface(image6,NULL, ecran,&posmode);
if((*manette)==0)
SDL_BlitSurface(image8,NULL, ecran,&posmanette);
else if((*manette)==1)
SDL_BlitSurface(image9,NULL, ecran,&posmanette);

positionbone1.x=650;
positionbone1.y=237;
      SDL_BlitSurface(image5,NULL, ecran,&positionbone1);

SDL_Delay(100);
                }
                if(i==2)
                {
           
 if((*volume)==2)
SDL_BlitSurface(image4,NULL, ecran,0);
                         
else if((*volume)==1)
SDL_BlitSurface(image3,NULL, ecran,0);

else if((*volume)==0)
SDL_BlitSurface(image2,NULL, ecran,0);

if((*mode)==0)
SDL_BlitSurface(image7,NULL, ecran,&posmode);
else if((*mode)==1)
SDL_BlitSurface(image6,NULL, ecran,&posmode);
if((*manette)==0)
SDL_BlitSurface(image8,NULL, ecran,&posmanette);
else if((*manette)==1)
SDL_BlitSurface(image9,NULL, ecran,&posmanette);

positionbone1.x=650;
positionbone1.y=462;
SDL_BlitSurface(image5,NULL, ecran,&positionbone1);

     SDL_Delay(100);
}
                if(i==3)

                {
      
 if((*volume)==2)
SDL_BlitSurface(image4,NULL, ecran,0);
                         
else if((*volume)==1)
SDL_BlitSurface(image3,NULL, ecran,0);

else if((*volume)==0)
SDL_BlitSurface(image2,NULL, ecran,0);

if((*mode)==0)
SDL_BlitSurface(image7,NULL, ecran,&posmode);
else if((*mode)==1)
SDL_BlitSurface(image6,NULL, ecran,&posmode);
if((*manette)==0)
SDL_BlitSurface(image8,NULL, ecran,&posmanette);
else if((*manette)==1)
SDL_BlitSurface(image9,NULL, ecran,&posmanette);

positionbone1.x=650;
positionbone1.y=625;
SDL_BlitSurface(image5,NULL, ecran,&positionbone1);

SDL_Delay(100);
                }
                break;
            case SDLK_UP: 
                i--;
                if(i<0)
                {
                 	   i=3;
                }
                
                if(i==1)
                {
    
 if((*volume)==2)
SDL_BlitSurface(image4,NULL, ecran,0);
                         
else if((*volume)==1)
SDL_BlitSurface(image3,NULL, ecran,0);

else if((*volume)==0)
SDL_BlitSurface(image2,NULL, ecran,0);

if((*mode)==0)
SDL_BlitSurface(image7,NULL, ecran,&posmode);
else if((*mode)==1)
SDL_BlitSurface(image6,NULL, ecran,&posmode);
if((*manette)==0)
SDL_BlitSurface(image8,NULL, ecran,&posmanette);
else if((*manette)==1)
SDL_BlitSurface(image9,NULL, ecran,&posmanette);

positionbone1.x=650;
positionbone1.y=237;
SDL_BlitSurface(image5,NULL, ecran,&positionbone1);
SDL_Delay(100);
      
                }
                if(i==2)
                {
     
 if((*volume)==2)
SDL_BlitSurface(image4,NULL, ecran,0);
                         
else if((*volume)==1)
SDL_BlitSurface(image3,NULL, ecran,0);

else if((*volume)==0)
SDL_BlitSurface(image2,NULL, ecran,0);

if((*mode)==0)
SDL_BlitSurface(image7,NULL, ecran,&posmode);
else if((*mode)==1)
SDL_BlitSurface(image6,NULL, ecran,&posmode);
if((*manette)==0)
SDL_BlitSurface(image8,NULL, ecran,&posmanette);
else if((*manette)==1)
SDL_BlitSurface(image9,NULL, ecran,&posmanette);

positionbone1.x=650;
positionbone1.y=462;
SDL_BlitSurface(image5,NULL, ecran,&positionbone1);

     SDL_Delay(100);
                }
                if(i==3)
                {
      
 if((*volume)==2)
SDL_BlitSurface(image4,NULL, ecran,0);
                         
else if((*volume)==1)
SDL_BlitSurface(image3,NULL, ecran,0);

else if((*volume)==0)
SDL_BlitSurface(image2,NULL, ecran,0);

if((*mode)==0)
SDL_BlitSurface(image7,NULL, ecran,&posmode);
else if((*mode)==1)
SDL_BlitSurface(image6,NULL, ecran,&posmode);
if((*manette)==0)
SDL_BlitSurface(image8,NULL, ecran,&posmanette);
else if((*manette)==1)
SDL_BlitSurface(image9,NULL, ecran,&posmanette);
positionbone1.x=650;
positionbone1.y=625;
SDL_BlitSurface(image5,NULL, ecran,&positionbone1);
SDL_Delay(100);
                }
                break;        
}
break;
}
 SDL_Flip(ecran);
}

}
void play(SDL_Surface *ecran,int volume,int mode,int manette){
SDL_Surface *image=NULL,*image1=NULL,*image2=NULL,*image3=NULL;
image= IMG_Load("../newgame/map/1.png");
image2= IMG_Load("../newgame/map/3.png");
image1= IMG_Load("../newgame/map/2.png");
image3= IMG_Load("../newgame/map/sousmenu2.png");
SDL_Event event;
int cont=1;
                    SDL_BlitSurface(image,NULL, ecran,0);
                    SDL_Flip(ecran);
int i=0;
while(cont){
SDL_PollEvent(&event);
switch(event.type)
{
case SDL_KEYDOWN:

switch(event.key.keysym.sym)
            {
            case SDLK_RETURN: 
if (i==1){ 
game(ecran,0,manette);


                }
                else if (i==2)
                {
game(ecran,1,0);

  	}
              
                break;

            case SDLK_DOWN:
                i++;
                if(i==3)
                {
                    i=1;
                
                }
                if(i==1)
                {

                    SDL_BlitSurface(image1,NULL, ecran,0);
                    SDL_Flip(ecran);
                                  SDL_Delay(100);

                }
                if(i==2)
                {
                    SDL_BlitSurface(image2,NULL, ecran,0);
                    SDL_Flip(ecran);
           SDL_Delay(100);}
                break;
            case SDLK_UP: 
                i--;
                if(i<0)
                {
                 	   i=2;
                }
                
                if(i==1)
                {
                    SDL_BlitSurface(image1,NULL, ecran,0);
                    SDL_Flip(ecran);
             SDL_Delay(100);   }
                if(i==2)
                {
                    SDL_BlitSurface(image2,NULL, ecran,0);
                    SDL_Flip(ecran);
               SDL_Delay(100); }
                break;     
        case SDLK_BACKSPACE: 

      SDL_BlitSurface(image3,NULL, ecran,0);
cont=0;           

                    SDL_Flip(ecran);
           
	break;   
}
break;
}
 
}



}
