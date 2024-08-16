#include <stdio.h>
#include <stdlib.h>
void calculo ()
{
    int i,n,soma=0;
    printf ("\nDigite o valor maximo: ");
    scanf ("%d",&n);
    for (i=2;i<=n;i=i+2)
    {
        soma=soma+i;
        printf ("\nn = %d e soma = %d",i,soma);
    }
}
int main ()
{
    printf ("Comeco");
    calculo();
    printf ("\nFim!!");
}
