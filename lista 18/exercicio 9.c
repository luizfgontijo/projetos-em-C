#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void p1 (int a2[3][2],int b2[3][2])
{
    int i,j;
    printf ("\n\n    Matriz A\n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf ("   %d",a2[i][j]);
        }
        printf ("\n");
    }
    printf ("\n\n    Matriz B\n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf ("   %d",b2[i][j]);
        }
        printf ("\n");
    }
}
void p2 (int a2[3][2],int b2[3][2])
{
    int i,j,c[3][2],ct[2][3],sa=0,sb=0,sc=0,sf=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            c[i][j]=(3*a2[i][j])-b2[i][j];
        }
    }
    printf ("\n\n    MAtriz C\n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf ("   %d",c[i][j]);
        }
        printf ("\n");
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            ct[i][j]=c[j][i];
        }
    }
    printf ("\n\n    Matriz transposta de C\n\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("   %d",ct[i][j]);
        }
        printf ("\n");
    }
    for (j=0;j<2;j++)
        {
                sa=a2[2][j]+sa;
        }
    for (i=0;i<3;i++)
    {
        sb=b2[i][2]+sb;
    }
    for (j=0;j<2;j++)
    {
        sc=c[0][j]+sc;
    }
    sf=sa+sb+sc;
    printf ("\nsoma -> %d+%d+%d= %d",sa,sb,sc,sf);
}
int main ()
{
    int a[3][2],b[3][2],j,i;
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf ("\nInsira A[%d][%d]: ",i+1,j+1);
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf ("\nInsira B[%d][%d]: ",i+1,j+1);
            scanf ("%d",&b[i][j]);
        }
    }
    p1(a,b);
    p2(a,b);
}
