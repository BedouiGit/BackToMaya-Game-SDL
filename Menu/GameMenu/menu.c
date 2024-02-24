
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
int main()
{
    int i=0;
    SDL_Init(SDL_INIT_VIDEO); 
    SDL_Surface *ecran =NULL,*imageDeFond = NULL,*image=NULL,*image2=NULL,*image3=NULL,*image4=NULL,*image5=NULL; 
    ecran=SDL_SetVideoMode(1020, 580, 32, SDL_HWSURFACE);
    SDL_Rect positionFond,positionim,positionim2,positionim3,positionim4;
    SDL_WM_SetCaption("THE ETERNAL STONES", NULL);
    positionFond.x = 0;
    positionFond.y = 0;
    positionim.x =0 ;
    positionim.y = 0 ;
    positionim2.x =0 ;
    positionim2.y = 0 ;
    positionim3.x =0 ;
    positionim3.y = 0 ;
    positionim4.x =0 ;
    positionim4.y = 0 ;
 
    imageDeFond = IMG_Load("menu.png");
    image= IMG_Load("start.png");
    image2= IMG_Load("continue.png");
    image3= IMG_Load("settings.png");
    image4= IMG_Load("exit.png");
    SDL_Flip(ecran);
    if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS,1024) == -1)
    {
        printf("%s",Mix_GetError());
    }
    Mix_Music *musique;
    Mix_AllocateChannels(20);
    musique = Mix_LoadMUS("music.mp3");
    Mix_PlayMusic(musique, -1);
    Mix_VolumeMusic(MIX_MAX_VOLUME / 1);
    Mix_Chunk *MB;
    
    SDL_Event event;
    SDL_BlitSurface(imageDeFond, NULL, ecran,&positionFond);
    int continuer = 1;

    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
        case SDL_QUIT :
            continuer = 0;
            break;
        case SDL_MOUSEBUTTONDOWN:
           if (event.button.button == SDL_BUTTON_LEFT)
{
                if ( event.button.x>390 && event.button.y >400 && event.button.x <610  && event.button.y <440)
                {
                    SDL_BlitSurface(image,NULL, ecran, &positionim);
                    SDL_Flip(ecran);
                    SDL_Delay(400);
                  
                }

                if ( event.button.x >390 && event.button.y >440 && event.button.x <610 && event.button.y <485)
                {
                    SDL_BlitSurface(image2,NULL, ecran, &positionim2);
                    SDL_Flip(ecran);
                    SDL_Delay(400);
                
                   
                }
                if ( event.button.x >390 && event.button.y >485 && event.button.x < 610 && event.button.y <540)

                {
                    SDL_BlitSurface(image3,NULL, ecran, &positionim3);
                    SDL_Flip(ecran);
                    SDL_Delay(400);

                }
                if ( event.button.x >390 && event.button.y >540 && event.button.x < 610 && event.button.y <560)
                {
                    SDL_BlitSurface(image4,NULL, ecran, &positionim4);
                    SDL_Flip(ecran);
                    SDL_Delay(400);
                  
                }
            break;
        case SDL_KEYDOWN:
            switch(event.key.keysym.sym)
            {

            case SDLK_RETURN: 
                if (i==1)
                {

                }
                else if (i==2)
                {
                }
                else if (i==3)
                {

                }
           
                else if (i==4)
                {
                    continuer=0;
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
                    SDL_BlitSurface(image,NULL, ecran, &positionim);
                    SDL_Flip(ecran);
                    SDL_Delay(500);
                
                }
                if(i==2)
                {
                    SDL_BlitSurface(image2,NULL, ecran, &positionim2);
                    SDL_Flip(ecran);
                    SDL_Delay(500);
                  
                }
                if(i==3)
                {
                    SDL_BlitSurface(image3,NULL, ecran, &positionim3);
                    SDL_Flip(ecran);
                    SDL_Delay(500);


                }
                if(i==4)
                {
                    SDL_BlitSurface(image4,NULL, ecran, &positionim4);
                    SDL_Flip(ecran);
                    SDL_Delay(500);
                }
                 break;
            case SDLK_UP:  
                i--;
                if(i<0)
                {
                    i=5;
                }
                if(i==5)
                {
                    i=4;
                }
                if(i==1)
                {
                    SDL_BlitSurface(image,NULL, ecran, &positionim);
                    SDL_Flip(ecran);
                    SDL_Delay(500);

                }
                if(i==2)
                {
                    SDL_BlitSurface(image2,NULL, ecran, &positionim2);
                    SDL_Flip(ecran);
                    SDL_Delay(500);

                }
                if(i==3)
                {
                    SDL_BlitSurface(image3,NULL, ecran, &positionim3);
                    SDL_Flip(ecran);
                    SDL_Delay(500) ;  

                }
                if(i==4)
                {
                    SDL_BlitSurface(image4,NULL, ecran, &positionim4);
                    SDL_Flip(ecran);
                    SDL_Delay(500);

                }   
                break;
            }
        }
        SDL_Flip(ecran);
    }
}
    Mix_FreeMusic(musique);
    Mix_CloseAudio();
    SDL_Quit();
    return EXIT_SUCCESS;

}






