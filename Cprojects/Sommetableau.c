#include<stdio.h>
#include<stdlib.h>
int sommeTableau(int tableau[], int tailleTableau);


int main(){
    int taille;
    int tab[taille];

    printf("Entrer la taille du tableau : ");
    scanf("%d",&taille);

    int i = 0;
    while(i < taille){
        printf("Entrer sa valeur :");
        scanf("%d",&tab[i]);
        i++;
    }
    int somme = sommeTableau(tab,taille);
    printf("la somme est %d",somme);


    return 0;
}

int sommeTableau(int tableau[], int tailleTableau){

     int resultat = 0;

    for (int i = 0; i < tailleTableau; i++){

        resultat += tableau[i];

    }

    return resultat;
}