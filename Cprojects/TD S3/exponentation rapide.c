#include<stdio.h>
#include<stdlib.h>

float puissance2(float x,int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return puissance2(x*x,n/2);

    }
    else
    {
        return x*puissance2(x*x,n/2);
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
    printf("%f a la puissance %d est %f ",x ,n , puissance2(x, n));

    return 0;
}