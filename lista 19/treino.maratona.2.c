#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int qm,n,i,sobra=0,gm,st=0,qf;
    printf ("\nInsira a cota mensal: ");
    scanf ("%d",&qm);
    printf ("\nInsira o numero de meses: ");
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        printf ("\nQuanto voce gastou no mes? ");
        scanf ("%d",&gm);
        sobra=qm-gm;
        st=sobra+st;
    }
    qf=qm+st;
    printf ("\n%d",qf);
}
