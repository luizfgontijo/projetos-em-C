#include <stdio.h>
#include <conio.h>
int main ()
{
    int soma=0,media,numero,qtnumeros=0,menor=0,maior=0,r=1;
    while (r==1)
    {
        printf ("\nDigite um numero: ");
        scanf ("%d",&numero);
        soma=soma+numero;
        qtnumeros++;

        if (qtnumeros==1)
        {
            maior=numero;
            menor=numero;
        }
        if (numero>maior)
        {
            maior=numero;
        }
        if (numero<menor)
        {
            menor=numero;
        }
        printf ("\nDeseja informar mais algum numero (1)sim (2)nao ");
        scanf ("%d",&r);
    }
    media=soma/qtnumeros;
    printf ("\nMedia= %d",media);
    printf ("\nO maior numero e %d\nO menor numero e %d",maior,menor);
    return 0;
}
