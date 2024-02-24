#include "fonction.h"
#include <unistd.h>
#include <fcntl.h> 

int arduinoWriteData(char x)
{
    char chemin[]="/dev/ttyUSB0";
    FILE*f;

    f=fopen(chemin,"w");
    if(f == NULL){
        return(-1);
}
    fprintf(f,"%d",x);
    fclose(f);

    return(0);
}

int arduinoReadData(char *x,int *prevx)
{

    int fd = open("/dev/ttyUSB0",O_RDWR);
    ssize_t size = read(fd, x, 1);
    printf("Read byte %c\n", *x);
   

    return(0);
}

void manette(char *manet,perso *perso,int *prevx,int manett)
{
if(manett==1){
arduinoReadData(manet,prevx) ;
printf("data %d\n",*manet);
if(*manet>=0&&*manet<=8)
{
switch(*manet)
{
case 0:
perso->moveright=0;
	perso->moveleft=0;
	perso->jump=0;
perso->attack=0;
	break;

case 1:
perso->moveright=0;
perso->moveleft=1;
perso->jump=1;
perso->attack=0;
	break;

case 2:
perso->moveright=0;
perso->moveleft=1;
perso->jump=0;
perso->attack=0;
	break;

case 3:
perso->jump=0;
perso->moveright=1;
perso->moveleft=0;
perso->attack=0;
	break;

case 4:
perso->jump=1;
perso->moveright=0;
perso->moveleft=0;
perso->attack=0;
	break;

case 5:
perso->jump=1;
perso->moveright=1;
perso->moveleft=0;
perso->attack=0;
	break;
case 6:
perso->jump=0;
perso->moveright=0;
perso->moveleft=0;
perso->attack=1;

break;
case 7:
perso->jump=0;
perso->moveright=0;
perso->moveleft=0;
perso->attack=1;
break;
case 8:
perso->jump=0;
perso->moveright=0;
perso->moveleft=0;
perso->attack=1;
break;

}
}
}
}
