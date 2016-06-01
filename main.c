#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Déclaration des variables propres au programme
    const MAX = 100, MIN = 1;
    srand(time(NULL));
    int nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    int compteur = 0;
    int joueur;

    printf("Bienvenue dans le jeu du + ou - !\n==================================\n");
    while(compteur < 10 && joueur != nombreMystere){
        printf("Veuillez entrer un chiffre :\n");
        scanf("%d", &joueur);
        if(joueur < nombreMystere){
            printf("Trop petit !\n");
        }else if(joueur > nombreMystere){
            printf("Trop grand !\n");
        }else{
            printf("Bravo, vous avez trouve le chiffre mystere ! Il s'agissait de %d. \n", nombreMystere);
            printf("Il vous a fallu %d coups pour y arriver.\n", compteur);
        }
        compteur++;
    }
    return 0;
}
