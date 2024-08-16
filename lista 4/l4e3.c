#include <stdio.h>
#include <conio.h>
int main ()
{
    float soma=0;
    float numerador=1;
    float denominador=1;

    while ((numerador<=1)&&(denominador<=40))
    {
        soma=(numerador/denominador)+soma;
        denominador=denominador+1;
    }
    printf ("O valor da soma %f\n",soma);
    return 0;
}
