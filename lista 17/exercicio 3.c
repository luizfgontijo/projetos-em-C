#include <stdio.h>
#include <stdlib.h>
void p1(int c[2][3],int d[2][3])
{
    int i,j;
    printf ("\n\n    Matriz A\n\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("   %d",c[i][j]);
        }
        printf ("\n");
    }
    printf ("\n\n    Matriz B\n\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("   %d",d[i][j]);
        }
        printf ("\n");
    }
}
int p2 (int d[2][3],int e[2][3])
{
    int i,j,somalinha=0,somacoluna=0,s=0;
    i=0;
    for (i=0;i<1;i++)
    {
        for (j=0;j<3;j++)
        {
            somalinha=somalinha+d[i][j];
        }
    }
    for (j=0;j<1;j++)
    {
        for (i=0;i<2;i++)
        {
            somacoluna=somacoluna+e[i][j];
        }
    }
    s=somacoluna+somalinha;
    return s;
}
void p3 (int f [2][3])
{
    int i,j,soma=0,media;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            soma=soma+f[i][j];
        }
    }
    media=soma/6;
    printf ("\nMedia da matriz B vale-> %d",media);
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            if (f[i][j]>media)
                printf ("\nElemento B[%d][%d], que vale %d esta acima da media.",i,j,media);
        }
    }

}
void p4 (int g[2][3], int h[2][3])
{
    int i,j,k[2][3],soma=0;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            k[i][j]=g[i][j]+(2*h[i][j]);
        }
    }
    printf ("\n\n    Matriz C\n\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("   %d",k[i][j]);
        }
        printf ("\n");
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            if (i==1)
            soma=soma+k[i][j];
        }
    }
    printf ("\nA soma de todos os elementos da segunda linha de C vale %d",soma);
}
int main ()
{
    int i,j,a[2][3],b[2][3],soma;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("\nInsira A[%d][%d] -> ",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("\nInsira B[%d][%d] -> ",i,j);
            scanf ("%d",&b[i][j]);
        }
    }
    p1(a,b);
    soma=p2(a,b);
    printf ("\nA soma dos elementos da primeira linha de A com a ultima coluna de B vale %d",soma);
    p3(b);
    p4 (a,b);
}
