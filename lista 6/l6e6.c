#include <stdio.h>
#include <conio.h>
int main ()
{
    int fat=1,n,r=1;
    while (r==1)
    {
        fat=1;
        printf ("\nDigite um numero: ");
        scanf ("%d",&n);
        while (n>1)
        {
        fat=fat*n;
        n=n-1;
        }
        printf ("\nValor final %d",fat);
        printf ("\nDeseja descobrir a fatorial de mais algum numero? (1)sim (2)nao: ");
        scanf ("%d",&r);

    }
    return 0;
}
