#ifndef IDENTITER_H_INCLUDED
#define IDENTITER_H_INCLUDED
#define TAILLE 255

typedef struct identiter{
    int id;
    char nom[TAILLE];
    char prenom[TAILLE];
    char adresse[TAILLE];
    char ville[TAILLE];
    char codep[TAILLE];
}identiter;

extern void profilEtIntegration();
extern void integrationFichier(identiter profil);
extern void lire();

#endif // IDENTITER_H_INCLUDED
