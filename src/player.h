#ifndef PLAYER_H
#define PLAYER_H

typedef enum{
    GUERRIER,
    RANGER,
    MAGICIEN,
    VOLEUR
} TypeAventurier;

typedef enum {
    BOUCLIER,
    TORCHE,
    ARC,
    HACHE
} armeActive;

typedef enum {
    EPEE,
    BATON,
    GRIMOIRE,
    DAGUE
} armeAntique;

typedef struct{
    char nom[50];

    TypeAventurier type;
    armeActive armeChoisi;
    armeAntique armeRecherchee;

    int ligneDepart;
    int colonneDepart;

    int positionLigne;
    int positionColonne;

    int trouveCoffre;
    int trouveArmeAntique;
    int vivant;

} Joueur;

extern char *nomAventurier[];
extern char *nomArme[];
extern char *nomArmeAntique[];

armeAntique associerArmeAntique(TypeAventurier type);

void creerJoueur(Joueur *joueur);

int choisirNombreJoueur();

void creationJoueur(Joueur joueur[], int nbJoueur);

void choisirNouvelleArme(Joueur *joueur);

#endif
