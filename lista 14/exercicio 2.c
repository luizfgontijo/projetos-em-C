#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int cotdolar,coteuro,r[10],d[10],e[10],i;
    printf ("Qual e a cotacao do dolar hoje? ");
    scanf ("%d",&cotdolar);
    printf ("\nQual e a cotacao do euro hoje? ");
    scanf ("%d",&coteuro);
    for (i=0;i<10;i++)
    {
        printf ("\nQual valor voce tem em real? ");
        scanf ("%d",&r[i]);
        d[i]=r[i]/cotdolar;
        e[i]=r[i]/coteuro;
        printf ("\nTendo %d em real voce tem %d em dolar e %d em euro!",r[i],d[i],e[i]);
    }
}
