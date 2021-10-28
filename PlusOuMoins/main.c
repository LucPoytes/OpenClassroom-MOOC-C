
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    //Declaration variables
    int nbRandom = 0;
    int nbSaisi = 0;
    int nbCoup = 0;
    const int nbMin = 1;
    const int nbMax = 100;

    //Generation nombre aleatoire
    srand(time(NULL));
    nbRandom = (rand() % (nbMax - nbMin - 1)) + nbMin;

    printf("Jeu du plus ou moins !\n");

    do {
        //Saisi nb
        printf("Quel est le nombre mystere ? <1..100> : ");
        scanf("%d",&nbSaisi);

        nbCoup++;

        //Affichage
        if (nbSaisi < nbRandom) {
            printf("C'est plus !\n");
        } else if (nbSaisi > nbRandom) {
            printf("C'est moins !\n");
        } else {
            printf("\nVous avez trouve !\n");
            printf("Nombre de coups: %d",nbCoup);
        }
    } while(nbSaisi != nbRandom); //nbSaisi différent de nbRandom

    return 0;
}
