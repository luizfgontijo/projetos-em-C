#include <stdio.h>
#include <conio.h>
int main()
{
    int cn=0;
    int numero=-7;
    int soma=0;
    while (cn<10)
    {
        numero=numero+2;
        soma=numero+soma;
        cn++;
        printf ("\nA soma parcial e %d",soma);

    }
        printf ("\nA soma final e %d",soma);
        return 0;
}
