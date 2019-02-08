#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "identiter.h"

int main()
{
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
