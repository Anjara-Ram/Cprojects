#include<stdio.h>
#include<stdlib.h>


double moyenneTableau(int tableau[], int tailleTableau);

int main(){

    int taille;
    printf("Entrer la taille du tableau :");
    scanf("%d",&taille);

    int i = 0;
    int tab[taille];
    while( i < taille){
        printf("Entrer sa valeur : ");
        scanf("%d",&tab[i]);
        i++;
    }

    double resultat = 0.0;
    resultat = moyenneTableau(tab,taille);

    printf("La moyenne est donc : %f", resultat);


    return 0;
}

double moyenneTableau(int tableau[], int tailleTableau){

    double moyenne;
    double somme = 0;
    for (int i = 0; i < tailleTableau; i++){
        
        somme += tableau[i];
        moyenne = somme/tailleTableau;

    }
    return moyenne;
}
