#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char chaine[] = "Texte de test", *suiteChaine = NULL;

    suiteChaine = strchr(chaine, 'd');

     printf("Voici la fin de la chaine a partir du premier d : %s", suiteChaine);

    return 0;
}