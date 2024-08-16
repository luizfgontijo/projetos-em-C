#include <stdio.h>
#include <conio.h>
int main()
{
    int numero=1;
    int soma=0;
    while (numero<=49)
    {
        soma=soma+numero;
        numero=numero+2;

    }
    printf ("O valor da soma e %d",soma);
    return 0;
}
