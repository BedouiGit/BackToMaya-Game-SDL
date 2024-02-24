#include "Save.h"

void Init_Save_Menu(save *S)
{
S->Background_Save=IMG_Load("./src/Image/Save/Background.png");
S->Save_Lum=IMG_Load("./src/Image/Save/Lum.png");
S->Rect_Save.x=0;
S->Rect_Save.y=0;

S->Save_Opt[0].y=345;
S->Save_Opt[0].x=345;

S->Save_Opt[1].y=345;
S->Save_Opt[1].x=650;

S->Mouse_Pos_y=0;
S->Mouse_Pos_x=0;
S->PS=-1;
S->PSP=-1;
}

int SaveFNCTN(save* S,SDL_Surface* Screen)
{
int PHASE=2;
SDL_Event event;
SDL_BlitSurface(S->Background_Save,NULL,Screen,&S->Rect_Save);
        while (SDL_PollEvent(&event) )
    {
      if ( event.type == SDL_QUIT )  {  PHASE= 5;  }

      if ( event.type == SDL_KEYDOWN ) // Bouttons
      {
	switch(event.key.keysym.sym)
	{
        case SDLK_ESCAPE :
	 { PHASE = 1; break; }
	case SDLK_LEFT:
		{ if (S->PS>0) S->PS--;
		  else if (S->PS == -1) S->PS=0;

		  break;
		}
	case SDLK_RIGHT :
		{ if ((S->PS < 1)&&(S->PS>=0)) S->PS++;
		  else if (S->PS == -1) S->PS=1;
		  break;
		}
	case SDLK_RETURN :
		{
		  if(S->PS!=-1) {if (S->PS==0) PHASE=11; else PHASE=6;}
		  break;
		}
	case SDLK_KP_ENTER :
		{
		  if(S->PS!=-1) {if (S->PS==0) PHASE=11; else PHASE=6;}
		  break;
		}	
	}
      }
	else if (event.type==SDL_MOUSEMOTION) // MOUSE
{
      SDL_GetMouseState(&S->Mouse_Pos_x, &S->Mouse_Pos_y);

     if ( S->Mouse_Pos_y >= 350 && S->Mouse_Pos_y <= 405)
     {
          if (S->Mouse_Pos_x >= 440 && S->Mouse_Pos_x < 615) {
                 S->PS=0;
          }
          else if (S->Mouse_Pos_x >= 780 && S->Mouse_Pos_x < 865)
          {
		 S->PS=1;
          }
	  else S->PS=-1;
     }
          else S->PS=-1;
}
}
if(S->PS!=-1)
	if(SDL_MOUSEBUTTONDOWN)
		if(event.type==SDL_MOUSEBUTTONDOWN && event.button.button== SDL_BUTTON_LEFT)
			{
			if (S->PS==0) PHASE=11;
			else PHASE=6;
			}
		 if (S->PS!=-1) SDL_BlitSurface(S->Save_Lum,NULL,Screen,&S->Save_Opt[S->PS]);

//---------------------------------------------------------------------------------------------------/
S->PSP=S->PS;
SDL_Flip(Screen);
return PHASE;
}
