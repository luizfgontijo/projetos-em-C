#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a[3][5],i,j,soma=0,media,maior,menor;
    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            printf ("\nInsira a[%d][%d]: ",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    maior=a[0][0];
    menor=a[0][0];
    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            if (a[i][j]<menor)
                menor=a[i][j];
            if (a[i][j]>maior)
                maior=a[i][j];
        }
    }
    printf ("\n\n    Matriz A   \n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            printf ("   %d",a[i][j]);
        }
        printf ("\n");
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            if (a[i][j]==maior)
            printf ("\nmaior-> %d esta na posicao a[%d][%d]",maior,i,j);
            if (a[i][j]==menor)
            printf ("\nmenor-> %d esta na posicao a[%d][%d]",menor,i,j);
        }
        printf ("\n");
    }
    return 0;
}
