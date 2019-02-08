#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Const
#define PATH "registre_identiter.txt"

void lire(){
    FILE *pFile;
    char sString[255]="",sString2[255]="";
    pFile = fopen(PATH,"r");

    if (pFile == NULL){
        perror ("Error opening file");
    } else {
        while(fgets (sString , 255 , pFile)!=NULL){
            strcat(sString2,sString);
        }
    }
    fclose(pFile);
    puts(sString2);
}
