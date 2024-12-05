#include<stdio.h>
#include<stdlib.h>

float puissance(float x,int n)
{
    float puiss = 1;
    for(int i = 1; i<= n; i++){
        puiss = puiss*x;
    }
    return puiss;
}

int main()
{
    float x;
    int n;
    printf("Donner un nombre : ");
    scanf("%f", &x);
    printf("Donner sa puissance : ");
    scanf("%d", &n);
    printf("%0.2f a la puissance %d est %0.2f ",x ,n , puissance(x, n));

    return 0;
}
