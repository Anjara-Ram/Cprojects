#include<stdio.h>
#include<stdlib.h>

float puissance(float x,int n)
{
    if (n==0)
    {
        return 1;
    }
    else if (n >= 1)
    {
        return x*puissance(x,n-1); 
    }
    
    
}

int main()
{
    float x;
    int n;
    printf("Donner un nombre : ");
    scanf("%f", &x);
    printf("Donner sa puissance : ");
    scanf("%d", &n);
    printf("%f a la puissance %d est %f ",x ,n , puissance(x, n));

    return 0;
}
