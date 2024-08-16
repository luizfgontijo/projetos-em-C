#include <stdio.h>
#include <conio.h>
int main ()
{
    int f,n,mult;
    printf ("\nDigite um numero: ");
    scanf("%d",&n);
    for (f=1;f<=20;f++)
    {
        mult=n*f;
        printf ("\nMultiplo %d vale %d",f,mult);
    }
    return 0;
}
