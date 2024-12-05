#include <stdio.h>
#include <stdlib.h>


int sommeTableau(int tableau[], int tailleTableau);

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int monTableau[taille];

    printf("Entrez les valeurs du tableau :\n");
    for (int i = 0; i < taille; ++i) {
        printf("Element %d : ", i + 1);
        scanf("%d", &monTableau[i]);
    }

    int resultat = sommeTableau(monTableau, taille);

    printf("La somme du tableau est : %d\n", resultat);

    return 0;
}


int sommeTableau(int tableau[], int tailleTableau) {
    int somme = 0;
    
    for (int i = 0; i < tailleTableau; ++i) {
        somme += tableau[i];
    }

    return somme;
}