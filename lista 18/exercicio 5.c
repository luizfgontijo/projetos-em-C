#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int p1(int na,int nb)
{
    int s;
    s=na+nb;
    return s;
}
int p2 (int na, int nb)
{
    int s;
    s=na-nb;
    return s;
}
int p4 (int na, int nb)
{
    int d;
    d=na/nb;
    return d;
}
int p3 (int na, int nb)
{
    int m;
    m=na*nb;
    return m;
}
int main ()
{
    int x,n1,n2,soma,sub,mult,div;
    printf ("\nInsira o primeiro numero: ");
    scanf ("%d",&n1);
    printf ("\nInsira o segundo numero: ");
    scanf ("%d",&n2);
    printf ("\nEscolha a operacao que deseja realizar: (1)soma (2)substracao (3)multiplicacao (4)divisao: ");
    scanf ("%d",&x);
    switch (x)
    {
        case 1: soma=p1(n1,n2);
        printf ("soma-> %d",soma);
        break;
        case 2: sub=p2(n1,n2);
        printf ("subtracao -> %d",sub);
        break;
        case 3: mult=p3(n1,n2);
        printf ("multiplicacao -> %d",mult);
        break;
        case 4: div=p4(n1,n2);
        printf ("divisao -> %d",div);
        break;
    }
}
