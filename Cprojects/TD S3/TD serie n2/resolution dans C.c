#include<stdio.h>
#include<math.h>

void resolution(float A,float B,float C);

int main()
{
    float A,B,C;
    printf("Resolution de AX^2 + BX + C = 0 \n");
    printf("Entrer A : ");
    scanf("%f",&A);
    printf("Entrer B : ");
    scanf("%f",&B);
    printf("Entrer C : ");
    scanf("%f",&C);
    printf("Si P(X) = %0.0fX^2 + %0.0fX + %0.0f = 0\n",A, B, C);

    resolution(A,B,C);

    return 0;
}

void resolution(float A,float B,float C)
{
    float delta,X,Y;
    delta = B*B - 4*A*C;

    //Traitement de sorties
    if (delta > 0)
    {
        X =((-B + sqrt(delta))/2*A);
        Y =((-B - sqrt(delta))/2*A);

        printf("Le polynome admet deux solutions\nX = %0.3f et Y = %0.3f",X, Y);
    }
    else
    {
        if (delta == 0)
        {
            X = (-B/(2*A));

            printf("Le polynome admet une racine double\nX = %0.3f",X);
        }
        else
        {
            printf("Pas de solutions");
        }  
    }

}