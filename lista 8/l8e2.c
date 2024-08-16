#include <stdio.h>
#include <conio.h>
int main ()
{
    int a,b,i,soma,contadordenumeros=0;
    printf ("Digite o primeiro valor: ");
    scanf ("%d",&a);
    printf ("Digite o segundo valor: ");
    scanf ("%d",&b);
    for (i=1;i<=1000;i++)
    {
        if ((i%a==0)&&(i%b==0))
        {
            printf ("\n%d e divisivel",i);
            contadordenumeros++;
            soma=contadordenumeros+soma;
        }
    }
    printf ("\n%d sao divisiveis.",contadordenumeros);
    return 0;
}
