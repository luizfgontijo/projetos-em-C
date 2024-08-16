#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a[7],c[7],g[7],maiora,menorc,somaa=0,mediaa,somac=0,mediac,i;
    for (i=0;i<7;i++)
    {
        printf ("\nDigite sua nota em AED1: ");
        scanf ("%d",&a[i]);
        printf ("\nDigite sua nota em CALC1: ");
        scanf ("%d",&c[i]);
        printf ("\nHomem (1) ou Mulher (2): ");
        scanf ("%d",&g[i]);
    }
    for (i=0;i<7;i++)
    {
        somaa=somaa+a[i];
        somac=somac+c[i];
        if (i==0)
            maiora=a[0];
            menorc=c[0];
        if (c[i]<menorc)
            menorc=c[i];
        if (a[i]>maiora)
            maiora=a[i];
    }
    mediaa=somaa/7;
    mediac=somac/7;
    for (i=0;i<7;i++)
    {
        if (g[i]==1)
            printf ("\nNota de calculo dos homens: %d",c[i]);

    }
    for (i=0;i<7;i++)
    {
          if (g[i]==2)
            printf ("\nNota de AED1 das mulheres: %d",a[i]);
    }
    printf ("\nMaior nota de AED1 da turma -> %d",maiora);
    printf ("\nMenor nota de Calculo da tuuma -> %d",menorc);
    printf ("\nMedia AED1 -> %d\nMedia calculo -> %d",mediaa,mediac);
    return 0;
}
