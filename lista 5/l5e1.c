#include <stdio.h>
#include <conio.h>
int main()
{
    int contadordenumero=1;
    int numero=2;
    int soma=0;
    while (contadordenumero<=15)
    {
        soma=numero+soma;
        numero=numero+2;
        contadordenumero=contadordenumero+1;
        printf("\nA soma parcial e %d",soma);

    }
    printf ("A soma final e %d\n",soma);
    return 0;
}
