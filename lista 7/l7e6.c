#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int fat=1,f,soma=0;
    for (f=1;f<=8;f++)
    {
        fat=fat*f;
        printf ("\n%d",fat);
        soma=soma+fat;
    }
    printf ("\nSoma = %d",soma);
    return 0;
}
