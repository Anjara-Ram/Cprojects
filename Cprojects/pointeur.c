#include <stdio.h>
#include <stdlib.h>

/* Je mets le prototype en haut. Comme c'est un tout
petit programme je ne le mets pas dans un .h, mais
en temps normal (dans un vrai programme), j'aurais placé
le prototype dans un fichier .h bien entendu */

void decoupeMinutes(int heures, int minutes);

int main(int argc, char *argv[])
{
    int variable = 10;
    
    printf("la valeur de la variable est %d\n",variable);
    printf("l'adresse de la variable est %p\n",&variable);


    int *pointeur;
    pointeur = &variable;
    printf("la valeur du pointeur est %p\n",pointeur);
    printf("la valeur contenue dans le pointeur est %d\n",*pointeur);


    return 0;
}
