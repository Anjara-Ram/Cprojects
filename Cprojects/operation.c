#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    double a = 0.0,b =0.0;
    int choix;
    char continuer;


    do
    {
        printf("Choisissez l operation que vous voulez : \n");
    printf("1- addition\n");
    printf("2- soustraction\n");
    printf("3- multiplication\n");
    printf("4- division\n");
    printf("Votre choix :");
    scanf("%d",&choix);


    printf("Entrer le premier nombre : ");
    scanf("%lf",&a);
    printf("Entrer le deuxieme nombre : ");
    scanf("%lf",&b);


    double resultat = 0.0;
    switch (choix)
    {
    case 1:
        resultat = a + b;
        printf("%f + %f = %f\n", a, b, resultat);
        break;
    case 2:
        resultat = a - b;
        printf("%f - %f = %f\n", a, b, resultat);
        break;
    case 3:
        resultat = a * b;
        printf("%f * %f = %f\n", a, b, resultat);
        break;
    case 4:
        resultat = a / b;
        printf("%f / %f = %f\n", a, b, resultat);
        break;
    
    default: printf("Erreur!\n");
        break;
    }

    printf("Voulez vous continuer? (O si oui et N sinon)");
    scanf(" %c",&continuer);

    } while (continuer == 'O' || continuer == 'o');
    



    return 0;
}