#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
    int i,soma=0,r=2;
    for (i=0;i<20;i++)
    {
        soma=r+soma;
        printf ("\nSoma realizada: %d + %d",r,soma);
        r=r+3;
    }
    printf ("\nSoma final -> %d",soma);
}
