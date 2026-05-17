#include <stdio.h>
#include "combat.h"

char *nomMonstre[] = {"Basilic","Zombie","Troll","Harpie"};

int armeBatMonstre(armeActive arme, TypeMonstre monstre){

    if (arme == BOUCLIER && monstre == BASILIC){
        return 1;
    }

    if (arme == TORCHE && monstre == ZOMBIE){
        return 1;
    }

    if (arme == HACHE && monstre == TROLL){
        return 1;
    }

    if (arme == ARC && monstre == HARPIE){
        return 1;
    }

    return 0;
}

void retourDepart(Joueur *joueur){

    joueur->positionLigne = joueur->ligneDepart;
    joueur->positionColonne = joueur->colonneDepart;
}

void combat(Joueur *joueur, TypeMonstre monstre){

    printf("Monstre rencontre : %s\n", nomMonstre[monstre]);

    printf("Arme utilisee : %s\n", nomArme[joueur->armeChoisi]);

    if(armeBatMonstre(joueur->armeChoisi, monstre)){

        printf("L'arme fonctionne contre ce monstre.\n");

        printf("%s gagne le combat.\n", joueur->nom);
    }

    else{

        printf("Arme incompatible avec ce monstre.\n");

        printf("Retour a la case depart.\n");

        joueur->vivant = 0;

        retourDepart(joueur);
    }
}

int joueurGagne(Joueur joueur){

    if (joueur.trouveCoffre == 1 && joueur.trouveArmeAntique == 1){
        return 1;
    }

    return 0;
}
