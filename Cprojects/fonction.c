#include<stdio.h>

void saisie (float*,float*,int*);
float dichotomie (float a,float b , int n);
float f(float);
void affichage (int, float);

int main()=
{
    float a, b, r;
    int n;
    saisie(&a,&b,&n);
    r = dichotomie(a,b,n);
    affichage(n,r);
    return 0;
}

void saisie (float*a,float*b,int*n)
{
    printf("Taper la borne inferieure : ");
    scanf("%f", a);
    printf("Taper la borne superieure : ");
    scanf("%f", b);
    printf("Taper le nombre d iteration : ");
    scanf("%d", n);
}

float dichotomie (float a,float b , int n)
{
    float u, v , c;
    int i;
    u = a;
    v = b;
    
    for (int i = 1; i < n; i++)
    {
        c= (u+v)/2;
        if (f(u)*f(v)<0)
        {
            v = c;
            c= (u+c)/2;
        }
        else
        {
            u = c;
            c= (c+v)/2;
        }
        return c;
    }
}

void affichage (int n, float y)
{
    printf("Pour n = %d,la racine est = %f",n, y);
}

float f(float x)
{
    float y;
    y = x*x*x-2;
    return y;
}