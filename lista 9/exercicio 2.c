#include <stdio.h>
#include <stdlib.h>
void calculo ()
{
    int i,soma=0,preco,maiorpreco,menorpreco,media;
    for (i=0;i<7;i++)
    {
        printf ("\nDigite o preco: ");
        scanf ("%d",&preco);
        soma=preco+soma;
        if (i==0)
        {
            menorpreco=preco;
        }
        if (i==0)
        {
            maiorpreco=preco;
        }
        if (preco>maiorpreco)
        {
            maiorpreco=preco;
        }
        if (preco<menorpreco)
        {
            menorpreco=preco;
        }
    }
    media=soma/7;
    printf ("\nMaior preco -> %d \nMenor preco -> %d \nMedia -> %d",maiorpreco,menorpreco,media);
}
int main ()
{
    printf ("\nComeco");
    calculo ();
    printf ("\nFim");
}
