#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int p1 (int n2)
{
    int fat=1;
    while (n2>0)
    {
        fat=n2*fat;
        n2=n2-1;
    }
    return fat;
}
int main ()
{
    int fatn=1,fatnp=1,n,p,np,fatf=1;
    printf ("\nInsira N: ");
    scanf ("%d",&n);
    printf ("\nInsira P: ");
    scanf ("%d",&p);
    np=n-p;
    fatn=p1(n);
    while (np>0)
    {
        fatnp=np*fatnp;
        np=np-1;
    }
    fatf=fatn/fatnp;
    printf ("\nResultado-> %d",fatf);
}
