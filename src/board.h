#ifndef BOARD_H
#define BOARD_H


// TODO: prototypes des fonctions du module board

#include "player.h"

typedef enum {
    VIDE,
    MONSTRE,
    COFFRE,
    ARME_ANTIQUE,
    PORTAIL,
    TOTEM

} TypeCase;

typedef enum {
    BASILIC,
    ZOMBIE,
    TROLL,
    HARPIE

}TypeMonstre;



typedef struct{
    TypeCase type;
    TypeMonstre monstre;
    TypeAventurier arme;
    int revelee;
}Case;

typedef struct {
    Case grille[5][5];
    Joueur joueurs[4];
    int nb_joueurs;
} Plateau;



#endif