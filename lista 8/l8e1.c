#include <stdio.h>
#include <conio.h>
int main ()
{
    int i,n1,n2,soma;
    printf ("\nDigite um numero: ");
    scanf ("%d",&n1);
    printf ("\nDigite um numero: ");
    scanf ("%d",&n2);
    for (i=n1;i<=n2;i++)
    {
        if (i%2!=0)
        {
            soma=i+soma;
        }
        printf ("\nNumero=%d, Soma=%d",i,soma);
    }
    return 0;
}
