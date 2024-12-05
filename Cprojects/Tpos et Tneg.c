#include<stdio.h>

int main()
{
    int N,Tab[N],Tpos[1000],Tneg[1000],i;
    int neg =0;
    int pos = 0;


    printf("Entrer la taille du tableau");
    scanf("%d",&N);
    printf("Donner les valeurs :");
    for ( i = 0; i < N; i++)
    {
        scanf("%d",&Tab[i]);
    }

    for ( i = 0; i < N; i++)

    {
        if (Tab[i]<0)
        {
            Tneg[neg++]=Tab[i];
        }
        else
        {
            Tpos[pos++]= Tab[i];
        }
        
        
    }
    printf("Votre valeur : ");
    for ( i = 0; i < N; i++)
    {
        printf("%d",Tab[i]);
    }
    printf("Tableau positif : ");
    for ( i = 0; i < pos; i++)
    {
        printf("%d",Tpos[i]);
    }
    printf("Tableau positif : ");
    for ( i = 0; i < neg; i++)
    {
        printf("%d",Tneg[i]);
    }
 
    



    return 0;
}