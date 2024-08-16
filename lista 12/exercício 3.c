#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,cp=0,cn=0,r=1,mdois=0,mtres=0,cneg=0  ;
    while (r==1)
    {
        printf ("\nDigite um numero: ");
        scanf ("%d",&n);
        if (n%2==0)
        {
            mdois++;
        }
        if (n%3==0)
        {
            mtres++;
        }
        cn++;
        if (n>0)
        {
            cp++;
        }
        if (n<0)
        {
            cneg++;
        }
        printf ("\nDeseja continuar o programa? (1) sim ou (2) nao ");
        scanf ("%d",&r);
    }
    printf ("\nQuantidade de numeros-> %d",cn);
    printf ("\nQuantidade de numeros positivos-> %d",cp);
    printf ("\nQuantidade de numeros negativos-> %d",cneg);
    printf ("\nQuantidade de numeros divisiveis por 2-> %d",mdois);
    printf ("\nQuantidade de numeros divisiveis por 3-> %d",mtres);
    return 0;
}

