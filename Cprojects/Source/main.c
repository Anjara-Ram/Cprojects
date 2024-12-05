#include<stdio.h>
#include "aire.h"
#include "aire.c"


int main(){
    double resultat;
    resultat = aireRectangle(10.0,20.0);

    printf("l aire du rectangle est %f",resultat);
    

    return 0;
}