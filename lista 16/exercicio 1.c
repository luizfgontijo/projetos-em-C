#include <stdio.h>
#include <stdlib.h>
void p1 (int b[2][4])
{
    int i,j;
    printf ("\n\n   Matriz A   \n\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<4;j++)
        {
            printf ("   %d",b[i][j]);
        }
        printf ("\n");
    }
}
void p2 (int c[2][4])
{
    int i,j,t[4][2];
    for (i=0;i<4;i++)
    {
        for (j=0;j<2;j++)
        {
            t[i][j]=c[j][i];
        }
    }
     printf ("\n\n   Matriz transposta de A   \n\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<2;j++)
        {
            printf ("   %d",t[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
int main ()
{
    int a[2][4],i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<4;j++)
        {
            printf ("\nInsira A[%d][%d]: ",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    p1(a);
    p2(a);
}
