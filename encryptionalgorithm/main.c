#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "f4cl.h"
#define n 9
#define e3 (n*1000)
#define rk (e3+(n*100)+99)
int main(int argc, char *argv[]){
    if(argc!=3){printf("you ran this wrong \n");  
printf("Usage: main key plaintext");
return -1;  }FILE* sourcething = fopen(2[argv], "rb");char *bunble = calloc(1, 9999);
    int llllll = fread(bunble, 1, 9999, sourcething);
    fclose(sourcething);unsigned char 
*jumbleshite = calloc(sizeof(char), llllll);int l;
    scramblywambly(1[argv], bunble, jumbleshite, llllll);
    for (l^=l; l < llllll; l++){printf("%c", jumbleshite[l]);}
    free(jumbleshite);free(bunble);    
    return 0;}
