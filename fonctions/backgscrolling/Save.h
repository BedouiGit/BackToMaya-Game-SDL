#ifndef SAVE_H_INCLUDED
#define SAVE_H_INCLUDED

typedef struct 
{
SDL_Surface* Background_Save;
SDL_Surface* Save_Lum;
SDL_Rect Rect_Save;
SDL_Rect Save_Opt[2];
int Mouse_Pos_y;
int Mouse_Pos_x;
int PS;
int PSP;
}save;

#endif 
