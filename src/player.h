#ifndef PLAYER_H
#define PLAYER_H

// TODO: prototypes des fonctions du module player

typedef enum{
    GUERRIER,
    RANGER,
    MAGICIEN, 
    VOLEUR,
} TypeAventurier;


typedef struct {
    char nom[50];
    TypeAventurier type;
    int x, y; //position sur le tableau
    int a_coffre; //0= non , 1= oui
    int a_arme;//0 = non , 1 = oui

} Joueur;


#endif