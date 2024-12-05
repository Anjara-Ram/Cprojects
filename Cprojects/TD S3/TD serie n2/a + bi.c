#include<stdio.h>


void reelimaginaire(float a,float b);




int main()
{   
    float a,b;
    printf("Entrer la partie reele de z : ");
    scanf("%f",&a);
    printf("Entrer la partie imaginaire de z : ");
    scanf("%f",&b);

    reelimaginaire(a,b);

    return 0;
}

void reelimaginaire(float a,float b)
{
    if (a==0)
    {
        if (b==0)
        {
            printf("z = 0");
        }
        else if (b==1)
        {
            printf("z = i");
        }
        else
        {
            printf("z = %0.0fi", b);
        }      
    }
    else
    {
        if (b==0)
        {
            printf("z = %0.0f", a);
        }
        else if (b==1)
        {
            printf("z = %0.0f + i", a);
        }
        else
        {
            printf("z = %0.0f + %0.0fi", a, b);
        } 
    }
}