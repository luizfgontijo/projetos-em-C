#include <stdio.h>
#include <conio.h>
int main ()
{
 int n;
 int fat=1;
 printf ("Qual o numero da fatorial ");
 scanf ("%d",&n);
 while (n>1)
    {
        fat=fat*n;
        n=n-1;
        printf ("\n%d\n",fat);
    }
printf ("\nO valor final e %d",fat);
return 0;
}
