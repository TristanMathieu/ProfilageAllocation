#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "identiter.h"

int main()
{

/*
    FILE * f;
    f=fopen("registre_identiter.txt","r");

    int i=255;
    int trouver=0;
    char stringToFind[20];

    do {
        stringToFind=("Profil %d", i);
        fgets(stringToFind, sizeof(stringToFind), stdin );
        char line[255];
        while (!feof(f)){
            fgets(line,sizeof(line),f);
            if(strstr(line, stringToFind) != NULL)
            {
                printf("%s",line);
            }
        }
    } while (i>0 || trouver==1);

    fclose(f);
    */

    int choix;

    printf("Choix : (1 register, 2 read)\n");
    scanf("%d", &choix);

    switch(choix){
        case 1 :

            profilEtIntegration();
            break;


        case 2 :

            lire();
            break;


        default :

            printf("Erreur switch choix.");

    }

}
