#include<stdio.h>
#include<stdlib.h>


int sommeTableau(int* tableau, int tailleTableau);


int main(){
    int i =0, taille;

    printf("Entrer la taille :");
    scanf("%d",&taille);

    int tab[taille];

    while( i < taille){
        printf("donner valeur : ");
        scanf("%d",&tab[i]);
        i++;
    }
    int somme = sommeTableau(tab,taille);
    printf("la somme est %d",somme);
    
    return 0;
}

int sommeTableau(int* tableau, int tailleTableau){
    int somme = 0;
    for (int i =0; i < tailleTableau; i++){
        somme += tableau[i]; 
    }
    return somme;
}