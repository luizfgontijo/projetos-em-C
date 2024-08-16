#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void p1 (int b[10])
{
    int i;
    printf ("\n\n   Vetor A\n\n");
    for (i=0;i<8;i++)
    {
        printf ("    %d",b[i]);
    }
}
void p2 (int b[10])
{
    int i;
    for (i=0;i<8;i++)
    {
        if (b[i]%2!=0)
            printf ("\nposicao %d possui um numero impar",i+1);
    }
}
void p3 (int b[10])
{
    int i;
    for (i=0;i<8;i++)
    {
        if (b[i]%2==0)
            printf ("\nNumero par -> %d",b[i]);
    }
}
int p4 (int b[10])
{
    int i,soma=0,media,ci=0;
    for (i=0;i<8;i++)
    {
        if (b[i]%2!=0)
        {
        ci++;
        soma=b[i]+soma;
        }
    }
    media=soma/ci;
    return media;
}
int p5 (int b[10])
{
    int i,soma=0,medi,cp=0;
    for (i=0;i<8;i++)
    {
        if (b[i]%2==0)
        {
        cp++;
        soma=b[i]+soma;
        }
    }
    medi=soma/cp;
    return medi;

}
int main ()
{
    int a[8],mediai,mediap,i;
    for (i=0;i<8;i++)
    {
        printf ("\nInsira a[%d]: ",i+1);
        scanf ("%d",&a[i]);
    }
    p1(a);
    p2(a);
    p3(a);
    mediai=p4(a);
    printf ("\nMedia dos numeros impares -> %d",mediai);
    mediap=p5(a);
    printf ("\nMedia dos numeros pares -> %d",mediap);
}
