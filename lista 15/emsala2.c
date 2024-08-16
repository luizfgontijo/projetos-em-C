#include <stdio.h>
#include <stdlib.h>
int p1(int a[2][3], int b[2][3])
{
    int i,j,c[2][3],f[3][2];
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            c[i][j]=(2*b[i][j])-a[i][j];
        }
    }
    printf ("\n\n    Matriz C\n\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("   %d",c[i][j]);
        }
        printf ("\n");
    }

    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            f[j][i]=c[i][j];
        }
    }
    printf ("\n\n    Matriz transposta de C\n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf ("   %d",f[i][j]);
        }
        printf ("\n");
    }

    return c[2][3];
}
int p2(int d[2][3])
{
    int j,i,maior;
    maior=d[0][0];
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            if (d[i][j]>maior)
                maior=d[i][j];
        }
    }
    return maior;
}
int p3(int e[2][3])
{
    int j,i,menor;
    menor=e[0][0];
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            if (e[i][j]<menor)
                menor=e[i][j];
        }
    }
    return menor;
}
int main ()
{
    int a[2][3],b[2][3],i,j,maiorB,menorA,transposta;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("\nInsira a[%d][%d]: ",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("\nInsira b[%d][%d]: ",i,j);
            scanf ("%d",&b[i][j]);
        }
    }
    p1(a,b);
    maiorB=p2(b);
    printf ("\nMaior elemento de B -> %d",maiorB);
    menorA=p3(a);
    printf ("\nMenor elemento de A -> %d",menorA);
    }
