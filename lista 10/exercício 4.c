#include <stdio.h>
#include <stdlib.h>
void soma (float n1)
{
    float s=0,d=1,numerador=1;
    for (d=1;d<=n1;d++)
    {
        numerador=1;
        s=s+(numerador/d);
        printf ("\n%.0f/%.0f somado a soma = %.2f",numerador,d,s);
    }
}
int main ()
{
    float n,r=1;
    while (r==1)
    {
        printf ("\nDigite o valor de N ");
        scanf ("%f",&n);
        soma(n);
        printf ("\nDeseja continuar? (1) sim (2) nao ");
        scanf ("%f",&r);
    }
}
