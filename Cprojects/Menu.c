#include <stdio.h>
#include <stdlib.h>

int main() {

   int num = 0;

   printf("Choisissez un offre\n1- internet\n2- credit\n3- sos\n4- Mvola");
   scanf("%d",&num);

switch (num)
{
case 1:
    printf("Vous avez choisi internet");
    break;
case 2:
    printf("Vous avez choisi credit");
    break;
case 3:
    printf("Vous avez choisi SOS");
    break;
case 4:
    printf("Vous avez choisi Mvola");
    break;

default: printf("OUPSS!");
    break;
}


   return 0;
}