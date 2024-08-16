#include <stdio.h>
#include <stdlib.h>
void troca (int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    return;
}
int main ()
{
    int n1,n2;
    printf ("\nReceba n1: ");
    scanf ("%d",&n1);
    printf ("\nReceba n2: ");
    scanf ("%d",&n2);
    printf ("\n\nN1: %d\nN2: %d",n1,n2);
    troca (&n1,&n2);
    printf ("\n\nN1: %d\nN2: %d",n1,n2);

}
