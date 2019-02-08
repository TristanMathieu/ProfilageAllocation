#ifndef IDENTITER_H_INCLUDED
#define IDENTITER_H_INCLUDED
#define TAILLE 255

typedef struct identiter{
    char *nomination;
    char *prenom;
    char *adresse;
    char *ville;
    char *codep;
}identiter;

extern void profilEtIntegration();
extern void integrationFichier(identiter profil);
extern void lire();

#endif // IDENTITER_H_INCLUDED
