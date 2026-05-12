#include <stdio.h>
#include "display.h"

void afficher_case(Case c) {
    if (c.revelee == 0){
        printf(BLEU "[ ? ]" RESET);
        return;
    }
}

switch (c.type){
    case VIDE:
    printf(BLANC "[   ]" RESET);
    break;
}