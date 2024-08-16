#include <stdio.h>
#include <stdlib.h>
int soma (int n1, int n2)
{
    return n1+n2;
}
int main ()
{
    int n1,n2;
    printf ("\nInsira A: ");
    scanf ("%d",&n1);
    printf ("\nInsira B: ");
    scanf ("%d",&n2);
    printf ("\nA soma vale %d",soma(n1,n2));
}
