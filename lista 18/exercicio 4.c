#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
    int fatn=1,i,soma=0;

    for (i=1;i<=6;i++)
    {
        fatn=i*fatn;
        soma=fatn+soma;
    }
    printf ("\nSoma-> %d",soma);
}
