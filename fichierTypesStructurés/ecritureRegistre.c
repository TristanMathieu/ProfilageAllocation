#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "identiter.h"
// Const
#define PATH "registre_identiter.txt"

void profilEtIntegration(){
    identiter profil;

    fflush(stdin);
    printf("Nom : ");
    gets(profil.nom);

    fflush(stdin);
    printf("Prenom : ");
    gets(profil.prenom);

    fflush(stdin);
    printf("Adresse : ");
    gets(profil.adresse);

    fflush(stdin);
    printf("Ville : ");
    gets(profil.ville);

    fflush(stdin);
    printf("Code Postal : ");
    gets(profil.codep);

    integrationFichier(profil);
}


void integrationFichier(identiter profil){

    // Init Variables
    FILE *pFile;

    // Ouverture fichier
    pFile = fopen(PATH,"a");

    fputs("Nom : ",pFile);
    fputs(profil.nom,pFile);
    fputc('\n',pFile);

    fputs("Prenom : ",pFile);
    fputs(profil.prenom,pFile);
    fputc('\n',pFile);

    fputs("Adresse : ",pFile);
    fputs(profil.adresse,pFile);
    fputc('\n',pFile);

    fputs("Ville : ",pFile);
    fputs(profil.ville,pFile);
    fputc('\n',pFile);

    fputs("Code Postal : ",pFile);
    fputs(profil.codep,pFile);
    fputc('\n',pFile);

    fputc('\n',pFile);

    // Fermeture fichier
    fclose(pFile);
}

void lire(){
    FILE *pFile;
    char sString[2550]="",sString2[2550]="";
    pFile = fopen(PATH,"r");

    if (pFile == NULL){
        perror ("Error opening file");
    }else {
        while(fgets (sString , 2550 , pFile)!=NULL){
        //while(!(feof(pFile))){
            //fgets (sString , 255 , pFile);
            strcat(sString2,sString);
        }
    }
    fclose(pFile);
    puts (sString2);
}
