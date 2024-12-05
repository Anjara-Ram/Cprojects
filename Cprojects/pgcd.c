#include<stdio.h>


int pgcd(int a, int b);

int main()
{
    printf("%d",pgcd(40,80));
    return 0;
}

int pgcd(int a, int b)
{
    int r;
        if (a < b)
        {
            while (r != 0 )
                {
                    r = b % a;
                    b = a;
                    a = r;
                }

            return b;
        }
        else
        {
            if (b < a)
            {   
                while (r != 0 )
                    {
                        r = a % b;
                        a = b;
                        b = r;
                    }

                return a;        
            }
            if (a=b)
            {
                return a;
            }
            
        }
    
}