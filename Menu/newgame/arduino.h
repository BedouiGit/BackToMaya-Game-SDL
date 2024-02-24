#ifndef ARDUINO_H_INCLUDED
#define ARDUINO_H_INCLUDED
#include "playermov.h"
int arduinoWriteData(char x);
int arduinoReadData(char *x,int *prevx);
void manette(char *manet,perso *perso,int *prevx,int manett);
#endif 
