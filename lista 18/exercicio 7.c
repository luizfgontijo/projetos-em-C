#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int p1 (int m[10])
{
    int i,md,soma=0;
    for (i=0;i<10;i++)
    {
        soma=m[i]+soma;
    }
    md=soma/10;
    return md;
}
int p2 (int h[10])
{
    int i,ma;
    ma=h[0];
    for (i=0;i<10;i++)
    {
        if (h[i]>ma)
            ma=h[i];
    }
    return ma;
}
int p3 (int g[10])
{
    int i,me;
    me=g[0];
    for (i=0;i<10;i++)
    {
        if (g[i]<me)
            me=g[i];
    }
    return me;
}

int main ()
{
    int a[10],b[10],i,maior,menor,media;
    for (i=0;i<10;i++)
    {
        printf ("\nInsira A[%d]: ",i+1);
        scanf ("%d",&a[i]);
    }
    for (i=0;i<10;i++)
    {
        b[i]=(a[i]*2)+36;
        printf ("\nTemperatura em Celsius-> %d",a[i]);
        printf ("\nTemperatura em Fahrenheit-> %d\n",b[i]);
    }
    media=p1(a);
    printf ("\n\nMedia das temperaturas em Celsius -> %d",media);
    for (i=0;i<10;i++)
    {
        if (a[i]<media)
            printf ("\nTemperatura %d esta abaixo da media",a[i]);
    }
    menor=p3(a);
    maior=p2(a);
    for (i=0;i<10;i++)
    {
        if (a[i]==maior)
            printf ("\nMaior temperatura-> %d, posicao A[%d]",a[i],i+1);
        if (a[i]==menor)
            printf ("\nMenor temperatura -> %d, posicao A[%d]",a[i],i+1);
    }
}
