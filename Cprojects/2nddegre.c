#include<stdio.h>
#include<math.h>


void polynome(int a, int b, int c)
{
    float delta = (b * b) - (4 * a * c);
    float result1, result2;
    if (delta > 0)
    {
        result1 = ((-b + sqrt(delta))/(2 * a));
        result2 = ((-b - sqrt(delta))/(2 * a));

        printf("x1 = %f et x2 = %f",result1 , result2);
    }
    else if (delta == 0)
    {
        result1 = ((-b)/(2 * a));
        printf("x = %f",result1); 
    }
    else
    {
        printf("pas de solution");
    }
}

int main()
{   int a, b, c;
    printf("Entrer le coefficient de x^2 :");
    scanf("%d",&a);
    printf("Entrer le coefficient de x^1 :");
    scanf("%d",&b);
    printf("Entrer le coefficient de x^0 :");
    scanf("%d",&c);

    polynome(a,b,c);

    return 0;
}
