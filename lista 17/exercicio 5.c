#include <stdio.h>
#include <stdlib.h>
void p1(int a2[15][15])
{
    int i,j;
    printf ("\n\n Matriz A\n\n");
    for (i=0;i<15;i++)
    {
        for (j=0;j<15;j++)
        {
            printf ("    %d",a2[i][j]);
        }
        printf ("\n");
    }
}
void p2(int a3[15][15])
{
    int i,j,b[15];
    for (i=0;i<15;i++)
    {
        for (j=0;j<15;j++)
        {
            if (j==14)
                b[i]=a3[i][j];
        }
    }
    printf ("\nVetor B que contem a ultima coluna de A: ");
    for (i=0;i<15;i++)
    {
    printf ("  %d",b[i]);
    }
}
void p3 (int a4[15][15])
{
    int i,j,c[15];
    for (i=0;i<15;i++)
    {
        for (j=0;j<15;j++)
        {
            if (i==j)
                c[i]=a4[i][j];
        }
    }
    printf ("\nVetor C que contem a diagonal principal de A: ");
    for (i=0;i<15;i++)
    {
    printf ("  %d",c[i]);
    }
}
void p4 (int a5[15][15])
{
    int i,j,d[15];
        for (j=0;j<15;j++)
        {
                d[j]=a5[0][j];
        }

    printf ("\nVetor D que contem a primeira linha de A: ");
    for (i=0;i<15;i++)
    {
    printf ("   %d",d[i]);
    }
}
void p5 (int a6[15][15])
{
    int i,j,soma=0,media;
    for (i=0;i<15;i++)
    {
        for (j=0;j<15;j++)
        {
            soma=soma+a6[i][j];
        }
    }
    media=soma/150;
    printf ("\nMedia da matriz -> %d",media);
    for (i=0;i<15;i++)
    {
        for (j=0;j<15;j++)
        {
            if (a6[i][j]<media)
                printf ("\nElemento %d esta abaixo da media e na posicao A[%d][%d]",a6[i][j],i,j);
        }
    }

}
int main ()
{
    int i,j,a[15][15];
    for (i=0;i<15;i++)
    {
        for (j=0;j<15;j++)
        {
            a[i][j]=(4*i)-(2*j);
        }
    }
    p1(a);
    p2(a);
    p3(a);
    p4(a);
    p5(a);
}
