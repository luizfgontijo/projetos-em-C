#include <stdio.h>
#include <stdlib.h>
void categoria (int i)
{
    if (i<5)
        printf ("\nNadador nao tem categoria.");
    if ((i>=5)&&(i<=7))
        printf ("\nCategoria F.");
    if ((i>=8)&&(i<=10))
        printf ("\nCategoria E.");
    if ((i>=11)&&(i<=13))
        printf ("\nCategoria D.");
    if ((i>=14)&&(i<=15))
        printf ("\nCategoria C.");
    if ((i>=16)&&(i<=17))
        printf ("\nCategoria B.");
    if (i>=18)
        printf ("\nCategoria A.");
}
int main ()
{
    int i,r=1;
    while (r==1)
    {
        printf ("\nDigite a idade do nadador: ");
        scanf ("%d",&i);
        categoria (i);
        printf ("\nDeseja continuar? (1) sim (2) nao ");
        scanf ("%d",&r);
    }
}
