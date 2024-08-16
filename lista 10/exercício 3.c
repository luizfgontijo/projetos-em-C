#include <stdio.h>
#include <stdlib.h>
void quadrado (int a1, int b1)
{
    int area;
    area=b1*a1;
    printf ("\nA area e %d",area);
}
void retangulo (int a2, int b2)
{
    int area;
    area=a2*b2;
    printf ("\nA area e %d",area);
}
void cubo (int a3, int b3)
{
    int area;
    area=6*a3*b3;
    printf ("\nA area e %d",area);
}
void triangulo (int a4, int b4)
{
    int area;
    area=(a4*b4)/2;
    printf ("\nA area e %d",area);
}
int main ()
{
    int r=1,x,base,altura;
    while (r==1)
    {
        printf ("\nDigite o valor da base: ");
        scanf ("%d",&base);
        printf ("\nDigite o valor da altura: ");
        scanf ("%d",&altura);
        printf ("\nO que deseja calcular? (1) area quadrado (2) area retangulo (3) area cubo (4) area triangulo retangulo: ");
        scanf ("%d",&x);
        switch (x)
        {
            case 1: quadrado (altura,base);
            break;
            case 2: retangulo (altura,base);
            break;
            case 3: cubo (altura,base);
            break;
            case 4: triangulo (altura,base);
            break;

        }
        printf ("\nDeseja continuar? (1) sim (2) nao: ");
        scanf ("%d",&r);
    }
}
