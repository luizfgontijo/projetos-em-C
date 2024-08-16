//Faça um programa que leia uma série de 10 números e, após a leitura, mostre:
//- Todos os elementos que são pares e suas localizações.
//- Todos os múltiplos de 3 e suas localizações (caso existam).
//- O maior elemento entre os ímpares.
//- O menor elemento entre os pares.//
#include <stdio.h>
#include <stdlib.h>
void p1 (int pa[10])
{
    int i;
    for (i=0;i<10;i++)
    {
        if (pa[i]%2==0)
            printf ("\n%d e par e esta na posicao A[%d]",pa[i],i+1);
    }
}
void p2 (int pa[10])
{
    int i;
    for (i=0;i<10;i++)
    {
        if (pa[i]%3==0)
            printf ("\n%d e divisivel por 3 e esta na posicao A[%d]",pa[i],i+1);
    }
}
int p3 (int pa[10])
{
    int i,maior,ci=0,b[ci];
    for (i=0;i<10;i++)
    {
        if (pa[i]%2!=0)
            {
                b[ci]=pa[i];
                ci++;
            }
    }
    maior=b[0];
    for (i=0;i<ci;i++)
    {
        if (b[i]%2!=0)
            {
                if (b[i]>maior)
                {
                    maior=b[i];
                }
            }
    }
    return maior;
}
int p4 (int pa[10])
{
    int i,menor;
    menor=pa[0];
    for (i=0;i<10;i++)
    {
        if (pa[i]%2==0)
        {
            if (pa[i]<menor)
            {
                menor=pa[i];
            }
        }
    }
    return menor;
}
int main ()
{
    int a[10],i,maiorI,menorP;
    for (i=0;i<10;i++)
    {
        printf ("\nInsira A[%d]: ",i+1);
        scanf ("%d",&a[i]);
    }
    p1(a);
    p2(a);
    maiorI=p3(a);
    printf ("\n%d e o maior elemento impar!",maiorI);
    menorP=p4(a);
    printf ("\n%d e o menor elemento par!",menorP);
}
