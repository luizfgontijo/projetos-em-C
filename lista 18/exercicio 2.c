#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
    int i,a[10],somapar=0,somaimpar=0;
    for (i=0;i<10;i++)
    {
        printf ("\nInsira o numero: ");
        scanf ("%d",&a[i]);
    }
    for (i=0;i<10;i++)
    {
        if (a[i]%2==0)
            somapar=a[i]+somapar;
    }
    for (i=0;i<10;i++)
    {
        if (a[i]%2!=0)
            somaimpar=a[i]+somaimpar;
    }
    printf ("\nSoma par-> %d",somapar);
    printf ("\nSoma impar-> %d",somaimpar);
    return 0;
}
