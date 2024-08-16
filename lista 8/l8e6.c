#include <stdio.h>
#include <conio.h>
int main ()
{
    int n,d;
    printf ("Digite um numero: ");
    scanf ("%d",&n);
    for (d=n;d>=1;d=d-1)
    {
        if (n%d==0)
        {
            printf ("\n%d",d);
        }
    }
    return 0;
}
