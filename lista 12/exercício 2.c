#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n,g;
    printf ("\nDigite n: ");
    scanf ("%f",&n);
    g=programa(n);
    return 0;
}
int programa (float max)
{
     float i,soma=0,f,denominador=1,numerador=1;
     for (i=1;i<=max;i++)
    {
        printf ("\n%.0f/%.0f,%f",numerador,denominador,soma);
        denominador++;
        numerador=numerador+3;
        f=numerador/denominador;
        soma=f+soma;
    }
    return soma;
}
