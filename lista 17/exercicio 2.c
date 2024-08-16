#include <stdio.h>
#include <stdlib.h>
void p1(int b[8][10])
{
    int i,j,t[10][8],menor,loci,locj;
    for (i=0;i<10;i++)
    {
        for (j=0;j<8;j++)
        {
            t[i][j]=b[j][i];
        }
    }
    printf ("\n\n   Matriz transposta de A\n\n");
    for (i=0;i<10;i++)
    {
        for (j=0;j<8;j++)
        {
            printf ("    %d",t[i][j]);
        }
        printf ("\n");
    }
    menor=t[0][0];
    for (i=0;i<10;i++)
    {
        for (j=0;j<8;j++)
        {
            if (t[i][j]<menor)
            {
                menor=t[i][j];
                loci=i;
                locj=j;
            }
        }
    }
    printf ("\nO menor elemento da matriz e %d e esta na posicao t[%d][%d]",menor,loci+1,locj+1);
}
void p2 (int c[8][10])
{
    int i,j,m,loci,locj;
    m=c[0][0];
    for (i=0;i<8;i++)
    {
        for (j=0;j<10;j++)
        {
            if (c[i][j]>m)
            {
                m=c[i][j];
                loci=i;
                locj=j;
            }
        }
    }
    printf ("\nO maior elemento da matriz e %d e esta na posicao a[%d][%d]",m,loci+1,locj+1);
}
int main ()
{
    int i,j,a[8][10];
    for (i=0;i<8;i++)
    {
        for (j=0;j<10;j++)
        {
            a[i][j]=(2*i)+j;
        }
    }
    printf ("\n\n   Matriz A\n\n");
    for (i=0;i<8;i++)
    {
        for (j=0;j<10;j++)
        {
            printf ("    %d",a[i][j]);
        }
        printf ("\n");
    }
    p1(a);
    p2(a);
}
