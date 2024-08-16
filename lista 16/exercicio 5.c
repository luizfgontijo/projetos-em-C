#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i,j,a[4][4],somalinha=0,somacoluna=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("\nInsira o valor de A[%d][%d]-> ",i+1,j+1);
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            somalinha=somalinha+a[i][j];
        }
        a[i][3]=somalinha;
    }
    for (j=0;j<4;j++)
    {
        for (i=0;i<4;i++)
        {
            somacoluna=somacoluna+a[i][j];
        }
        a[3][j]=somacoluna;
    }
    printf ("\n\n   Matriz A \n\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            printf ("   %d",a[i][j]);
        }
        printf ("\n");
    }
}
