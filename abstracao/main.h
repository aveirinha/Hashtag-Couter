#ifndef _MAIN_
#define _MAIN_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Item.h"


extern unsigned long int HT_size; /*nao sei se sera boa ideia ser inteiro ou double ou outro tipo de variavel*/
extern unsigned int N_items;
extern unsigned int N_ocur;
extern link* hashtable;
extern unsigned int ocur_max;
extern char* tag_max;

int main();

#endif
