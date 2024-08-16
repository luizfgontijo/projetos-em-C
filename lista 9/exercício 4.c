#include <stdio.h>
#include <stdlib.h>
void calculo ()
{
    float i,numerador=1, denominador=1,soma=0;
    for (i=0;i<15;i++)
    {
        numerador=numerador+2;
        denominador=denominador+1;
        soma=soma+(numerador/denominador);
        printf ("\nNumero %.0f/%.0f    soma %.2f",numerador,denominador,soma);
    }
}
int main ()
{
    printf ("\nComeco");
    calculo ();
    printf ("\nFim!!!");
    return 0;
}
