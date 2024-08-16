#include <stdio.h>
#include <conio.h>
int main ()
{
    float soma=0;
    float numerador=1;
    float denominador=1;
    do{

        soma=(numerador/denominador)+soma;
        denominador=denominador+1;

    }
    while (denominador<=40);
    printf ("A soma e %f\n",soma);
    return 0;
}
