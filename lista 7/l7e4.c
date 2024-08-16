#include <stdio.h>
#include <conio.h>
int main ()
{
    int f,n,par,impar;
    for (f=1;f<=10;f++)
    {
        printf ("\nInforme um numero: ");
        scanf ("%d",&n);
        if (n%2==0)
        {
            par++;
        }
        else {impar++;};
    }
    printf ("\n%d numeros pares",par);

    printf ("\n%d numeros impares",impar);
    return 0;
}
