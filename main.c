#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // D�claration des variables propres au programme
    int nombreMaximum, nombreMinimum = 1;
    srand(time(NULL));
    int nombreMystere = (rand() % (nombreMaximum - nombreMinimum + 1)) + nombreMinimum;
    int difficulte = 1;
    int nombreJoueur2 = 0;
    int compteur = 0;
    int joueur = 0;
    int choixJoueur = 1;
    int nbrJoueurs = 0;

    /* On lance le programme uniquement si le joueur choisit 1, sinon on affiche un message,
    ensuite, le joueur choisit sa difficult� ainsi que le fait de joueur -ou pas- � 2 joueurs */
    if(choixJoueur != 0){
        printf("A quel niveau de difficulte souhaitez-vous jouer ?\n");
        printf(" 1 - Facile (entre 1 et 100)\n 2 - Moyen (entre 1 et 1000)\n 3 - Difficile (entre 1 et 10000)\n");
        scanf("%d", &difficulte);
        if(difficulte == 1){
            nombreMaximum == 100;
        }else if(difficulte == 2){
            nombreMaximum == 1000;
        }else{
            nombreMaximum == 10000;
        }
        // On initialise ici le nombreMystere afin qu'il prenne en compte la difficult�e
        printf("Bonjour, souhaitez-vous a 1 joueur ou a 2 joueurs ?\n");
        scanf("%d", &nbrJoueurs);
        if(nbrJoueurs == 1){
                while(choixJoueur != 0){
                printf("Bienvenue dans le jeu du + ou - !");
                printf("\n==================================\n");
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
                        printf("Souhaitez-vous recommencer une partie ? (1 = Oui/0 = Non)");
                        scanf("%d", &choixJoueur);
                    }
                    compteur++;
                }
            }
        }else{
            /* Si le joueur d�cide de jouer � 2, le joueur 2 doit rentrer son num�ro souhait�e,
            le joueur 1 �choue si le compteur atteint 10 tentatives */
            printf("Veuillez laisser le joueur 2 entrer un nombre myst�re : \n");
            scanf("%d", &nombreJoueur2 );
            while(compteur < 10 && joueur != nombreJoueur2){
                printf("Veuillez entrer un chiffre compris entre 1 et 100 :\n");
                scanf("%d", &joueur);
                if(joueur < nombreJoueur2){
                    printf("Trop petit !\n");
                }else if(joueur > nombreJoueur2){
                    printf("Trop grand !\n");
                }else{
                    printf("Bravo, vous avez trouve le chiffre mystere ! Il s'agissait de %d. \n", nombreJoueur2);
                    printf("Il vous a fallu %d coups pour y arriver.\n", compteur);
                    printf("Souhaitez-vous recommencer une partie ? (1 = Oui/0 = Non)");
                    scanf("%d", &choixJoueur);
                }
                compteur++;
            }
        }
    }else{
        // Oui, c'est vrai, pourquoi ?
        printf("Pourquoi partir si t�t ?");
    }
    return 0;
}
