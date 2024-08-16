#include <stdio.h>
#include <conio.h>
int main()
{
    float denominador=1;
    float numerador=1;
    float soma=0;
    while (denominador<=10)
    {
        soma=soma+(numerador/denominador);

        printf ("\n %.0f/%.0f = %.2f    soma=%.2f",numerador,denominador,numerador/denominador,soma);
        denominador=denominador+1;
    }
    printf ("\n\nO valor da soma e %.2f\n",soma);


}
