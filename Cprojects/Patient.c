#include<stdio.h>


float poids_moyenne(int t,float poids[]);
float taille_moyenne(int t,float taille[]);

int main()
{
    int i,t;
    float Taille[t],Poids[t];
     

    printf("Entrer le nombre des patients:");
    scanf("%d",&t);
    printf("Entrer les tailles des patients:");
    for ( i = 0; i < t; i++)
    {
        scanf("%f",&Taille[i]);
        if (Taille[i]>0)
        {
            continue;
        }
        else
        {
            break;
        }        
    }
    printf("L'effectif des patients : %d",t);

    printf("Entrer les poids des patients:");
    for ( i = 0; i < t; i++)
    {
        scanf("%f",&Poids[i]);
        if (Poids[i]>0)
        {
            continue;
        }
        else
        {
            break;
        }    
    }
    printf("Taille moyenne = %f",taille_moyenne(t,Taille));
    printf("poids moyenne = %f",poids_moyenne(t,Poids));


    
    



    return 0;
}


float taille_moyenne(int t,float taille[])
{   
    int i,moyenne;
    float Taille_total;
    for ( i = 0; i < t; i++)
    {
        Taille_total = Taille_total + taille[i];
    }
    moyenne = Taille_total/t;
    return moyenne;
}
float poids_moyenne(int t,float poids[])
{   
    int i,moyenne;
    float poids_total;
    for ( i = 0; i < t; i++)
    {
        poids_total = poids_total + poids[i];
    }
    moyenne = poids_total/t;
    return moyenne;
}