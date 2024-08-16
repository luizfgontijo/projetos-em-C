#include <stdio.h>
#include <stdlib.h>
void p1(int b[3][3])
{
    int i,j;
    printf ("\n\n   Matriz A\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("    %d",b[i][j]);
        }
            printf ("\n");
    }
    return 0;
}
void p2 (int c[3][3])
{
    int i,j;
    printf ("\nDiagonal principal:");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if (j==i)
                printf ("   %d",c[i][j]);
        }
    }
}
int p3 (int d[3][3])
{
    int i,j,m;
    m=d[0][0];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if (d[i][j]>m)
                m=d[i][j];
        }
    }
    return m;
}
int main ()
{
    int a[3][3],i,j,maior;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
        printf ("\nInsira a[%d][%d]: ",i,j);
        scanf ("%d",&a[i][j]);
        }
    }
    p1(a);
    p2(a);
    maior = p3(a);
    printf ("\nMaior -> %d",maior);
    return 0;
}
