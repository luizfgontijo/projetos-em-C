#include <stdio.h>
#include <stdlib.h>
void arranjo (n1)
{
    int fatd=1,fatn=1,p,d,resultado;
    printf ("\nDigite o valor de p: ");
    scanf ("%d",&p);
    d=n1-p;
    while (n1>1)
    {
        fatn=fatn*n1;
        n1=n1-1;
    }
    while (d>1)
    {
        fatd=fatd*d;
        d=d-1;
    }
    resultado=fatn/fatd;
    printf ("O arranjo vale %d",resultado);
}
void permutacao (n2)
{
    int fat=1;
    while (n2>1)
    {
    fat=fat*n2;
    n2=n2-1;
    }
    printf ("\nA permutacao vale %d",fat);
}
void combinacao (n3)
{
    int fatp=1,fatd=1,fatn=1,p,d,resultado;
    printf ("\nDigite o valor de p: ");
    scanf ("%d",&p);
    d=n3-p;
    while (n3>1)
    {
        fatn=fatn*n3;
        n3=n3-1;
    }
    while (d>1)
    {
        fatd=fatd*d;
        d=d-1;
    }
    while (p>1)
    {
        fatp=fatp*p;
        p=p-1;
    }
    resultado=fatn/(fatd*fatp);
    printf ("A combinacao vale %d",resultado);
}
int main ()
{
    int r=1,x,n;
    while (r==1)
    {
    printf ("\nQual o valor de n? ");
    scanf ("%d",&n);
    printf ("\nO que voce deseja calcular? (1) arranjo (2) permutacao (3) combinacao ");
    scanf ("%d",&x);
    switch (x)
    {
        case 1: arranjo (n);
        break;
        case 2: permutacao (n);
        break;
        case 3: combinacao (n);
        break;
    }
    printf ("\nDeseja continuar calculando? (1) sim (2) nao");
    scanf ("%d",&r);
    }
}
