#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Personne
{
    char nom[100];
    char prenom[100];
    int age;
};

typedef struct Personne Personne;

int main(){

    Personne personne;
     
    printf("Quelle est votre nom : ");
    scanf("%s",personne.nom);
    printf("Quelle est votre prenom : ");
    scanf("%s",personne.prenom);
    printf("Quelle est votre age : ");
    scanf("%d",&personne.age);


    printf("Vous etes %s %s et vous avez %d ans ", personne.nom, personne.prenom, personne.age);


    return 0;
}