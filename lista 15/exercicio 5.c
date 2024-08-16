#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a[3][3],b[3][3],i,j,somaA=0,mediaA,somab=0,mediab,maiorA,menorB;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
         printf ("\nInsira a[%d][%d]: ",i,j);
         scanf ("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
         b[i][j]=2*(a[i][j]);
        }
    }
    printf ("\n\n   Matriz B    \n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
         printf ("   %d",b[i][j]);
        }
        printf ("\n");
    }
    printf ("\nDiagonal principal de A-> ");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
          if (i==j)
            printf ("   %d",a[i][j]);
        }
    }
    printf ("\nDiagonal principal de B-> ");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
          if (i==j)
            printf ("   %d",b[i][j]);
        }
    }
    maiorA=a[0][0];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
          if (a[i][j]>maiorA)
            maiorA=a[i][j];
        }
    }
    menorB=b[0][0];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
          if (b[i][j]<menorB)
            menorB=b[i][j];
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
          if (a[i][j]==maiorA)
            printf ("\nMaior A-> %d, que esta na posicao a[%d][%d]",a[i][j],i,j);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
          if (b[i][j]==menorB)
            printf ("\nMenor A-> %d, que esta na posicao b[%d][%d]",b[i][j],i,j);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
          somaA=somaA+a[i][j];
        }
    }
    mediaA=somaA/9;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
          somab=somab+b[i][j];
        }
    }
    mediab=somab/9;
    printf ("\nMedia A-> %d",mediaA);
    printf ("\nMedia B-> %d",mediab);
    return 0;
}
