#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a[3][3],i,j,soma=0,media;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("\nInsira A[%d][%d]: ",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            soma=a[i][j]+soma;
        }
    }
    media=soma/9;
    printf ("\n\n  Matriz A   \n\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf ("   %d",a[i][j]);
        }
        printf ("\n");
    }
    printf ("\nMedia dos elementos -> %d\n\n",media);
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if (j==i)
                printf ("\n%d",a[i][j]);
        }
    }
    return 0;
}
