#include <stdio.h>
#include <conio.h>
int main ()
{
    int i,cn=0,n;
    printf ("\nDigite um numero: ");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            cn++;
        }
    }
    if (cn>=3)
    {
        printf ("\nNao e primo!\n");
    }
    else {
        printf ("\nPrimo!!");
    }
return 0;
}
