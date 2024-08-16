#include <stdio.h>
#include <conio.h>
int main()
{
    int contadordenumeros=0;
    int n;
    while (contadordenumeros<3){
        printf ("Digite um numero ");
        scanf ("%d",&n);
        if (n%3==0)
            printf("\nnumero e divisivel por 3\n");
        else
            printf ("\nnumero nao e divisivel por 3\n");
        contadordenumeros=1+contadordenumeros;
    }
    return 0;

}
