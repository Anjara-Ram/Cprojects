#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Personne
{
    char nom[100];
    char prenom[100];
    char adresse[1000];

    int age;
    int garcon;
};


int main (){

    
    int nombre = 0;
    printf("Tapez le nombre de joueur : ");
    scanf("%d",&nombre);
    struct Personne joueurs[100];



    for (int i = 0; i < nombre; i++)
    {
        printf("Votre nom : ");
        scanf("%s",joueurs[i].nom);

        printf("Votre prenom : ");
        scanf("%s",joueurs[i].prenom);

        printf("Votre adresse : ");
        scanf("%s",joueurs[i].adresse);

        printf("Votre age :");
        scanf("%d",&joueurs[i].age);

        printf("etes vous un garcon(1 si oui 0 sinon)? :");
        scanf("%d",&joueurs[i].garcon);
    
    }

    for (int i = 0; i < nombre; i++)
    {
        printf("information du joueur %d\n" ,i + 1);
        printf("nom : %s\n", joueurs[i].nom);
        printf("prenom : %s\n", joueurs[i].prenom);
        printf("adresse : %s\n", joueurs[i].adresse);
        printf("age : %d\n", joueurs[i].age);
        if (joueurs[i].garcon == 1)
        {
            printf("sexe : garcon \n");
        }
        else {
            printf("sexe : fille \n");
        }
        
        
    }
    
    

       


    return 0;
}