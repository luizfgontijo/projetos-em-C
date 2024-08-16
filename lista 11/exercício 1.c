#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int r=1,g,l1,l2,l3;
    while (r==1)
    {
        printf ("\nDigite o primeiro lado: ");
        scanf ("%d",&l1);
        printf ("\nDigite o segundo lado: ");
        scanf ("%d",&l2);
        printf ("\nDigite o terceiro lado: ");
        scanf ("%d",&l3);
        g=programa (l1,l2,l3);
        if (g==1)
            printf ("\nNao e um triangulo.");
        if (g==2)
            printf ("\nTriangulo equilatero.");
        if (g==3)
            printf ("\nTriangulo isosceles.");
        if (g==4)
            printf ("\nTriangulo escaleno.");
        printf ("\nDeseja continuar o programa? (1) sim (2) nao ");
        scanf ("%d",&r);
    }
    return 0;
}
int programa (int lado1,int lado2, int lado3)
{

    int sl12,sl23,sl13,g;
    sl12=lado1+lado2;
    sl23=lado2+lado3;
    sl13=lado1+lado3;

    if (lado1>sl23)
        g=1;
    if (lado2>sl13)
        g=1;
    if (lado3>sl12)
        g=1;
    if ((lado1==lado2)&&(lado2==lado3))
        g=2;
    if ((lado2==lado3)&&(lado2!=lado1))
        g=3;
    if ((lado1==lado2)&&(lado1!=lado3))
        g=3;
    if ((lado1==lado3)&&(lado2!=lado1))
        g=3;
    if ((lado1!=lado2)&&(lado2!=lado3)&&(lado1!=lado3))
        g=4;
    return g;
}
