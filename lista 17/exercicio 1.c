#include <stdio.h>
#include <stdlib.h>
void p1(int c[4])
{
    int i;
    printf ("\nElementos da diagonal principal: ");
    for (i=0;i<4;i++)
    {
        printf ("   %d",c[i]);
    }
}
int p2(int d[4])
{
    int i,m,soma=0;
    for (i=0;i<4;i++)
    {
        soma=soma+d[i];
    }
    m=soma/4;
    return m;
}
int p3 (int e[4])
{
    int i,pos=0;
    int m=e[0];
    for (i=0;i<4;i++)
    {
        if (e[i]>m)
            {
            m=e[i];
            pos=i;
            }
    }
    printf ("\nO maior elemento da diagonal principal -> %d e sua posicao e %d",m,pos+1);
    return m;
}
void p4 (int b[4][4],int maiord)
{
    int i,j;
    printf ("\nElementos da matriz que sao maiores que o maior elemento da diagonal principal: ")
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            if (b[i][j]>maiord)
                printf ("\n%d", b[i][j]);
        }
    }
}
int main ()
{
    int i,j,a[4][4],b[4],media,maior;
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            printf ("\nInsira A[%d][%d] -> ",i+1,j+1);
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            if (i==j)
                b[i]=a[i][j];
        }
    }
    p1 (b);
    media=p2 (b);
    printf ("\nMedia dos elementos da diagonal principal -> %d",media);
    maior = p3 (b);
    p4 (a,maior);
}
