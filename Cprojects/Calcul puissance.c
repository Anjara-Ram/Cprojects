#include<stdio.h>
#include<stdlib.h>

int puissance(int x,int n)
{
    int puiss = 1;
    for(int i = 1; i<= n; i++){
        puiss = puiss*x;
    }
    return puiss;
}

int main()
{
    int x, n;
    printf("Donner un nombre : ");
    scanf("%d", &x);
    printf("Donner sa puissance : ");
    scanf("%d", &n);
    printf("%d a la puissance %d est %d ",x ,n , puissance(x, n));

    return 0;
}
