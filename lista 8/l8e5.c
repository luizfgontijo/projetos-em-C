#include <stdio.h>
#include <conio.h>
int main ()
{
    int f,soma;
    for (f=1;f<=500;f++)
    {
        if (f%3==0)
        {
           printf ("\n%d Numero divisivel por 3",f);
           soma=soma+f;
        }
    }
    printf ("\nSoma=%d",soma);
    return 0;
}
