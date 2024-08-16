#include <stdio.h>
#include <conio.h>
int main ()
{
    float pa=80000000;
    float pb=65000000;
    int ano=0;
    while (pa>=pb)
    {
        ano=1+ano;
        printf ("\n%d anos",ano);
        pa=pa*1.015;
        pb=pb*1.03;
        printf ("\nA populacao de A e %.0f",pa);
        printf ("\nA populacao de B e %.0f\n\n",pb);
    }
    return 0;
}
