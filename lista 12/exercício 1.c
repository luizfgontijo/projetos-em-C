#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n,g;
    printf ("Digite N: ");
    scanf ("%d",&n);
    g=programa(n);
    return 0;
}
int programa (int max)
{
    int i;
    for (i=1;i<=max;i=i+4)
    {
        printf ("\n%d",i);
    }
    return i;
}
