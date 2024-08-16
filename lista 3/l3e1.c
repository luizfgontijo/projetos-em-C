#include <stdio.h>
#include <conio.h>
int main()
{
    int n1,n2,nsoma,r;
    printf ("Digite o primeiro numero: ");
    scanf ("%d",&n1);
    printf ("\nDigite o segundo numero: ");
    scanf ("%d",&n2);
    nsoma=n1+n2;
    if (nsoma>=10)
        r=nsoma+5;
        else r=nsoma+7;
        printf("\nr=%d\n",r);
    system("pause");
    return 0;
}
