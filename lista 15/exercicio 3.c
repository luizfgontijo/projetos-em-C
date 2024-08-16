#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a[3][4],soma=0,media,i,j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf ("\nInsira a[%d][%d]: ",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("\n\n   Matriz A   \n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf ("   %d",a[i][j]);
        }
        printf ("\n");
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            soma=soma+a[i][j];
        }
    }
    media=soma/12;
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            if (a[i][j]<media)
                printf ("\n%d menor que a media e esta na posicao a[%d][%d]",a[i][j],i,j);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            if (a[i][j]>media)
                printf ("\n%d maior que a media e esta na posicao a[%d][%d]",a[i][j],i,j);
        }
    }
    return 0;
}
