#include <stdio.h>
#include <conio.h>
int main ()
{
    int contadordenumeros=0;
    int numero;
    while (contadordenumeros<10)
    {
        printf ("Digite um numero: ");
        scanf ("%d",&numero);
        if (numero%2==0)
            printf ("O numero e par\n");
        else printf ("O numero e impar\n");
        contadordenumeros=contadordenumeros+1;
    }
}
