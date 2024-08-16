#include <stdio.h>
#include <conio.h>
int main ()
{
    float numerador=1,denominador;
    float soma=0;
    for (denominador=1;denominador<=50;denominador++)
    {

        soma=(numerador/denominador)+soma;
        numerador=numerador+2;
    }
        printf ("\nSoma = %.2f",soma);
    return 0;
}

