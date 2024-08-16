#include <stdio.h>
#include <stdlib.h>
void calculo ()
{
    int i,n,ci=0,cp=0,s=0,m;
    for (i=0;i<10;i++)
    {
        printf ("\nDigite um numero: ");
        scanf ("%d",&n);
        s=s+n;
        if (n%2==0)
        {
            cp++;
        }
        if (n%2!=0)
        {
            ci++;
        }
    }
    m=s/10;
    printf ("\nQuantidade de impares %d \nQuantidade de pares %d \nMedia %d",ci,cp,m);
}
int main ()
{
    printf ("\nComeco do programa");
    calculo ();
    printf ("\nFim!!!!!!!");
    return 0;
}
