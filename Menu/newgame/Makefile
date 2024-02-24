game:main.o rot.o backgroundfunc.o Menufunctions.o minimapfunc.o enigmedyn.o menu1.o AffichageObj.o playermov.o gamemenu.o InitObjet.o collisionbb.o arduino.o scrolling.o sousmenu.o   ennemi.o collision.o enigf.o
	gcc main.o backgroundfunc.o  minimapfunc.o rot.o menu1.o enigmedyn.o arduino.o AffichageObj.o enigf.o  gamemenu.o  collisionbb.o playermov.o ennemi.o collision.o sousmenu.o scrolling.o InitObjet.o Menufunctions.o -o game -lSDL  -lSDL_gfx -lSDL_ttf -lSDL_image -lSDL_mixer -g
menu1.o:menu1.c
	gcc -c menu1.c -lSDL -lSDL_image -lSDL_mixer -g
minimapfunc.o:minimapfunc.c
	gcc -c minimapfunc.c -lSDL -lSDL_image -lSDL_mixer -g
enigmedyn.o:enigmedyn.c
	gcc -c enigmedyn.c -lSDL -lSDL_image -lSDL_mixer -g
Menufunctions.o:Menufunctions.c
	gcc -c Menufunctions.c -lSDL -lSDL_image -lSDL_mixer -g
main.o:main.c
	gcc -c main.c -lSDL -lSDL_image -lSDL_mixer -g
backgroundfunc.o:backgroundfunc.c
	gcc -c backgroundfunc.c -lSDL -lSDL_image -lSDL_mixer -g

playermov.o:playermov.c
	gcc -c playermov.c -lSDL -lSDL_image -g
arduino.o:arduino.c
	gcc -c arduino.c -lSDL -lSDL_image -g
scrolling.o:scrolling.c
	gcc -c scrolling.c -lSDL -lSDL_image -g
ennemi.o:ennemi.c
	gcc -c ennemi.c -lSDL -lSDL_image -g
collision.o:collision.c
	gcc -c collision.c -lSDL -lSDL_image -g
AffichageObj.o:AffichageObj.c
	gcc -c AffichageObj.c -lSDL -lSDL_image -g
rot.o:rot.c
	gcc -c rot.c -lSDL -lSDL_image -g
InitObjet.o:InitObjet.c
	gcc -c InitObjet.c -lSDL -lSDL_image -g 
collisionbb.o:collisionbb.c
	gcc -c collisionbb.c -lSDL -lSDL_image -g 
enigf.o:enigf.c
	gcc -c enigf.c -lSDL -lSDL_image -g 
sousmenu.o:sousmenu.c
	gcc -c sousmenu.c -lSDL -lSDL_image -g 
gamemenu.o:gamemenu.c
	gcc -c gamemenu.c -lSDL -lSDL_image -g 

