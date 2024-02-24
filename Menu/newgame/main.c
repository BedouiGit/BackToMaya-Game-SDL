#include "fonction.h"
#include <unistd.h>
#include <SDL/SDL_rotozoom.h>
#include <fcntl.h>

#include <termios.h>
/** 
* @file main.c
*@brief Testing program 
*@auther ragnarok
* @version 0.1
* @date 3/5/2019
*Testing program for functionallity
*/
void savee(ennemis ennemi,perso perso,vie vie,SDL_Rect camera)
{
FILE *f;
f=fopen("save.bin","wb");
saves saves;
saves.ennemi=ennemi;
saves.camera=camera;
saves.perso=perso;
saves.vie=vie;
fwrite(&saves,sizeof(saves),1,f);
fclose(f);
}
void load(ennemis *ennemi,perso *perso ,vie *vie,SDL_Rect *camera,int *continuer,int *save)
{
FILE *f;
f=fopen("save.bin","rb");
saves saves;
fread(&saves,sizeof(saves),1,f);
fclose(f);
*ennemi=saves.ennemi;
*camera=saves.camera;
*perso=saves.perso;
vie->nb=saves.vie.nb;
}
/**
*@brief void game 
*@param ecran our screen of the game
*@param save to load our game
*@param manette to chose the play mode
* @return return nothing 
*/
void game (SDL_Surface *ecran,int save,int manett){
printf("hama\n");
int echap=0;
SDL_Surface *logono=NULL;
logono=IMG_Load("kalb.png");
int attacksync=0;
int mjump=0;
system("stty -F /dev/ttyUSB0 115200 -parenb cs8 -cstopb ");
char manet=1;
int enigvalid=0;
int prevx=0;
SDL_Surface *point=NULL;
int numkeys;
int answer=2;
char personom[20]="minisprite.png";
char mapnom[20]="miniback.bmp";
int azer=0;
//firex F;
//ennemy E;
/*
int counter=0,counter2=0;

int direction =1;

int state =1;

SDL_Rect pos_enemie,pos_fire;
*/
/*
pos_enemie.x=1000;
pos_enemie.y=480;

pos_fire.x=900;
pos_fire.y=380;*/


int hp[100];
int ques=0;
int y=1;
int pit=0;
int plat=0;
int saveeee=4;
enigme e;
int sol,r,run =1,running=1,alea;
char image[30]="";
int attackingnow=0;
perso perso ;
int portals=0;
int hit[100];
int collisiopill=0;
int startplat[100],endplat[100],haut[100];
int lastpos=0;
int collisiontumeur=0;
int collisionenuron=0;
ennemis firstenm ;
Objet attackcharc;
Objet tumor,pill,neuron,enemipoop,poopattack;
int continuer = 1;
vie vie;

int debut[3];
int fin[3];
debut[0]=2195;
int mvm=20;
fin[0]=2523;
debut[1]=7205;
fin[1]=7517;
SDL_Rect positionp;
double angle=0,zoomox=1;
Objet logox;
positionp.x=3600;
positionp.y=100;
debut[2]=9139;
	fin[2]=11521;
	initialiservie(&vie) ;
	startplat[0]=2000;
int data=0;
	haut[0]=180;
	endplat[0]=2300;
	int ennmouv,w=10;
	SDL_Rect camera;
	SDL_Surface *imageback=NULL;
	SDL_Event event;
	initialiserennemi(&firstenm,1000,1200);
	imageback=Init_imagedefond(imageback ,&camera ,0, 0 );
	initialiserperso(&perso);
	init_enigme(&e);
initialiserObj(&logox,"kalb.png",50,50);
	initialiserObj(&neuron,"../newgame/map/neuron.png",2700 ,435 );
	initialiserObj(&attackcharc,"../newgame/charc/attack.png",-100 ,-100 );
	initialiserObj(&pill ,"../newgame/map/pill1.png", 2350, 210 );
	initialiserObj(&tumor ,"../newgame/map/tumor.png", 600,500 );
	initialiserObj(&enemipoop ,"../newgame/charc/virus2.png", 3200,600 );
	initialiserObj(&poopattack,"../newgame/charc/poopatc.png", 3250,610);
if(save)
load(&firstenm,&perso ,&vie,&camera,1,&saveeee);
while(continuer)
{
printf("manette %d\n",manett);
perso.fall=0;
	    running=1,r=0 ;
SDL_PollEvent(&event);
switch(event.type)
  	{

        case SDL_QUIT:
            continuer = 0;
	 case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
case SDLK_BACKSPACE:
gamemenu(ecran,firstenm,perso,vie,camera);
break;            			
case SDLK_LEFT :
	perso.moveleft=1  ;
	            	break ;

		case SDLK_RIGHT :
		perso.moveright=1; 
			break ;
			case SDLK_LCTRL:

perso.attack=1;
			break;
		case SDLK_UP :
		perso.jump=1; 
			break ;
	    }
		break;
	case SDL_KEYUP:

            switch (event.key.keysym.sym)
            {
 		case SDLK_ESCAPE:
		    //continuer=0 ;
			break ;
				case SDLK_LCTRL:
perso.attack=0;
			break;
		case SDLK_LEFT :
		perso.moveleft=0;	
                   	break ;
		case SDLK_RIGHT :
		perso.moveright=0; 
			break ;
		case SDLK_UP :
		perso.jump=0; 
			break ;
	    }
		break;
}
SDL_Delay(20);
manette(&data,&perso,&prevx,manett);
/*pos_enemie.x= update_ennemi(positionsprte, pos_enemie);
pos_enemie.x= update_ennemix(perso.position, pos_enemie);
afficher_ennemyx(ecran,pos_enemie, direction ,counter,E,camera);
state=Distance(perso.position, pos_enemie);
if(state==3){
pos_fire.x=pos_enemie.x+10;
afficher_fire(ecran , counter2 ,pos_fire,F);
}
*/if(echap==99)
//gamemenu(ecran,firstenm,perso,vie,camera);

if(angle<361){
	//logox.image=zoom(&angle,&zoomox,logono);
angle+=5;
zoomox+=0.01;
logox.image=rotozoomSurface(logono,angle,zoomox,1);
}
printf("camera%d",camera.x);
prevx=manet;
if(enigvalid==0){
if(camera.x==3605){
	enigvalid= enig(ecran );
}
}

if(pit==0&&plat==0)
perso.gravity=335;
plat=collisionplatform(startplat,endplat,&perso.gravity,1,perso.position,camera ,haut);
pit=collisionpit(debut,fin,&perso.gravity,3,perso.position,camera);
if(camera.x==5000&&answer==2){
 generate_afficher(ecran,image,&e,&alea) ;
    sol=solution_e(image,&ques);	
    		r=resolution (&running,&run);
				answer=afficher_resultat(ecran,sol,r,&e,ques) ;
}

if(answer==1)
vie.nb++;
gravity(&perso);
jumpin(&camera,&perso);
perso.animation=mouv(perso);
collisionenuron=collisionbb(perso.position,neuron.position,camera);
if(collisionenuron==1){
	perso.mouvementspeed=10;
}else{
	perso.mouvementspeed=mvm;

}

collisiopill=collisionbb(perso.position,pill.position,camera);
if(collisiopill==1){
	mvm=60;
	pill.position.y=-50;
	pill.position.x=-50;
}
mouvement(&perso,&camera);
y=splitennemi(y);
attacking(&poopattack.position,&attacksync);
hp[0]=collisionbb(perso.position,poopattack.position,camera);
hp[1]=collisionbb(perso.position,enemipoop.position,camera);
if(perso.position.y>=550)
hp[3]=1;
else
hp[3]=0;
Health(&vie,hp,&camera,&perso.position,&firstenm.position,4);

if(perso.attack==1&&attackingnow==0){
	attackcharc.position.x=perso.position.x+camera.x+60;
		attackcharc.position.y=perso.position.y+30;
			attackingnow=30;
}
if (attackingnow==0&&perso.attack==0)
{
	attackcharc.position.x=-500;
}

SDL_BlitSurface(imageback, &camera, ecran, NULL);
point=SDL_LoadBMP("minidet.bmp");
//SDL_SetColorKey(point,SDL_SRCCOLORKEY,SDL_MapRGB(point->format,255,255,255));
miniMap (ecran, perso.position, mapnom,personom ,camera);

if(attackingnow>0){
	attackcharc.position.x+=100;
	attackingnow--;
}

if(hit[0]!=1){
hit[0]=collisionbb(attackcharc.position,firstenm.position,camera);
}
portal(&portals,positionp,ecran,camera);
affichageObj(attackcharc,ecran,camera);
affichageObj(logox, ecran,camera) ;
affichageObj(pill , ecran,camera) ;
affichageObj(poopattack,ecran,camera) ;
affichageObj(enemipoop, ecran,camera) ;
affichageObj(neuron , ecran,camera);
afficherperso(perso,ecran);
affichervie(&vie,perso,ecran);

if(hit[0]!=1){
firstenm=mouvennemi(firstenm,perso,camera,ecran,&lastpos,&y);
//collisionennemi(&perso,&firstenm,&camera,&vie);
afficherennemi(firstenm,ecran,y,camera);
//hp[2]=collisionbb(perso.position,firstenm.position,camera);
}
perso.prevright = perso.moveright;
perso.prevleft =perso.moveleft;
//affichageObj(tumor , ecran,camera) ;
SDL_Flip(ecran);
}
savee(firstenm,perso,vie,camera);
SDL_FreeSurface(imageback);  
freefurfaceperso(&perso);
freesurfaceennemi(&firstenm);
freesurfaceobject(&pill);
freesurfaceobject(&attackcharc);
freesurfaceobject(&poopattack);
freesurfaceobject(&tumor);
freesurfaceobject(&enemipoop);
freesurfaceobject(&neuron);
SDL_Quit();
}
