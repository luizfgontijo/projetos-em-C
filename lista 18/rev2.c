#include <stdio.h>
#include <stdlib.h>
void p1(int pa[4][5])
{
    int i,j;
    printf ("\n\n    Matriz A\n\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
            printf ("    %d",pa[i][j]);
        }
        printf ("\n");
    }
}
void p2(int pa[4][5])
{
    int i,j,ta[5][4];
    printf ("\n\n    Matriz transposta de A\n\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<4;j++)
        {
            ta[i][j]=pa[j][i];
        }
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<4;j++)
        {
            printf ("    %d",ta[i][j]);
        }
        printf ("\n");
    }
}
void p3(int bb[5][5])
{
    int i,j;
    printf ("\n\n    Matriz B\n\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf ("    %d",bb[i][j]);
        }
    }
    printf ("\nDiagonal principal de B");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if (i==j)
                printf ("    %d",bb[i][j]);
        }
        printf ("\n");
    }
}
int main ()
{
    int a[4][5],i,j,b[5][5];
    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
            printf ("\nInsira A[%d][%d]: ",i+1,j+1);
            scanf ("%d",&a[i][j]);
        }
    }
    p1(a);
    p2(a);
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            b[i][j]=(2*i)-j;
        }
    }
    p3(b);
}
