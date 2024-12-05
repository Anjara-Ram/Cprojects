#include<stdio.h>

float HornerRuffini(int n, float a[],float x);

int main()
{
    int degre;
    float a[degre],x;

    printf("Entrer le degre du polynome P(x):");
    scanf("%d",&degre);

    printf("Entrer les a,De plus haut degre vers le plus bas degre: \n");
    for (int i = degre; i >= 0; i--)
    {
            scanf("%f", &a[i]);
    }

    printf("Entrer la valeur de x :");
    scanf("%f",&x);

    float resultat = HornerRuffini(degre, a, x);

    printf("P(%0.2f) = %0.2f ",x,resultat);

    
    return 0;
}


float HornerRuffini(int n, float a[],float x)
{
    float resultat = a[n];
    for (int i = n-1; i >= 0; i--)
    {
        resultat = resultat * x + a[i];
    }
    return resultat;
}
