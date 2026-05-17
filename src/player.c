#include <stdio.h>
#include <string.h>
#include "player.h"

char *nomAventurier[] = {"Guerrier","Ranger","Magicien","Voleur"};

char *nomArme[] = {"Bouclier","Torche","Arc","Hache"};

char *nomArmeAntique[] = {"Epee de feu","Baton de controle des familiers","Grimoire interdit","Dague de sommeil"};

armeAntique associerArmeAntique(TypeAventurier type) {

    if (type == GUERRIER){
        return EPEE;
    }

    else if (type == RANGER){
        return BATON;
    }

    else if (type == MAGICIEN){
        return GRIMOIRE;
    }

    else{
        return DAGUE;
    }
}

void creerJoueur(Joueur *joueur){

    int choixType;
    int choixArme;

    printf("Entrez votre nom :\n");
    scanf("%s", joueur->nom);

    printf("\nChoisissez votre aventurier :\n");
    printf("0 = Guerrier\n");
    printf("1 = Ranger\n");
    printf("2 = Magicien\n");
    printf("3 = Voleur\n");

    scanf("%d", &choixType);

    while (choixType < 0 || choixType > 3){
        printf("Choix invalide, recommencez :\n");
        scanf("%d", &choixType);
    }

    joueur->type = choixType;

    joueur->armeRecherchee = associerArmeAntique(joueur->type);

    printf("\nChoisissez votre arme active :\n");
    printf("0 = Bouclier\n");
    printf("1 = Torche\n");
    printf("2 = Arc\n");
    printf("3 = Hache\n");

    scanf("%d", &choixArme);

    while (choixArme < 0 || choixArme > 3){
        printf("Choix invalide, recommencez :\n");
        scanf("%d", &choixArme);
    }

    joueur->armeChoisi = choixArme;

    joueur->positionLigne = -1;
    joueur->positionColonne = -1;

    joueur->ligneDepart = -1;
    joueur->colonneDepart = -1;

    joueur->trouveCoffre = 0;
    joueur->trouveArmeAntique = 0;

    joueur->vivant = 1;
}

int choisirNombreJoueur(){

    int nbJoueur;

    printf("Nombre de joueurs (entre 2 et 4) :\n");
    scanf("%d", &nbJoueur);

    while (nbJoueur < 2 || nbJoueur > 4){
        printf("Nombre invalide :\n");
        scanf("%d", &nbJoueur);
    }

    return nbJoueur;
}

void creationJoueur(Joueur joueur[], int nbJoueur){

    for (int i = 0; i < nbJoueur; i++){

        printf("\n===== Joueur %d =====\n", i + 1);

        creerJoueur(&joueur[i]);
    }
}

void choisirNouvelleArme(Joueur *joueur){

    int choixArme;

    printf("\n%s choisissez votre arme :\n", joueur->nom);

    printf("0 = Bouclier\n");
    printf("1 = Torche\n");
    printf("2 = Arc\n");
    printf("3 = Hache\n");

    scanf("%d", &choixArme);

    while (choixArme < 0 || choixArme > 3){
        printf("Choix invalide :\n");
        scanf("%d", &choixArme);
    }

    joueur->armeChoisi = choixArme;
}
