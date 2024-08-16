#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a[2][3],b[2][3],c[2][3],d[2][3],e[2][3],i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("\nInsira A[%d][%d]: ",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("\n\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("\nInsira B[%d][%d]: ",i,j);
            scanf ("%d",&b[i][j]);
        }
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf ("\n\n Matriz A \n \n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("   %d",a[i][j]);
        }
        printf ("\n");
    }
    printf ("\n\n Matriz B \n \n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("   %d",b[i][j]);
        }
        printf ("\n");
    }
    printf ("\n\n Matriz C \n \n");
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
            d[i][j]=2*(a[i][j])-b[i][j];
        }
    }
    printf ("\n\n Matriz D \n \n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("   %d",d[i][j]);
        }
        printf ("\n");
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            e[i][j]=2*(d[i][j])+c[i][j];
        }
    }
    printf ("\n\n Matriz E \n \n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("   %d",e[i][j]);
        }
        printf ("\n");
    }
}
