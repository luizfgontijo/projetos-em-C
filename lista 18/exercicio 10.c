#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
    int i,j,a[6][6],maior,menor,media,soma=0,ta[6][6];
    for (i=0;i<6;i++)
    {
        for (j=0;j<6;j++)
        {
            a[i][j]=(5*i)+(2*j);
        }
    }
    printf ("\n\n    Matriz A\n\n");
    for (i=0;i<6;i++)
    {
        for (j=0;j<6;j++)
        {
         printf ("    %d",a[i][j]);
        }
        printf ("\n");
    }
    maior=a[0][0];
    menor=a[0][0];
    for (i=0;i<6;i++)
    {
        for (j=0;j<6;j++)
        {
            if (a[i][j]<menor)
                menor=a[i][j];
        }
    }
    for (i=0;i<6;i++)
    {
        for (j=0;j<6;j++)
        {
            if (a[i][j]>maior)
                maior=a[i][j];
        }
    }
    for (i=0;i<6;i++)
    {
        for (j=0;j<6;j++)
        {
            if (maior==a[i][j])
                printf ("\nMaior elemento vale %d e esta na posicao A[%d][%d]",maior,i,j);
        }
    }
    for (i=0;i<6;i++)
    {
        for (j=0;j<6;j++)
        {
            if (menor==a[i][j])
                printf ("\nMenor elemento vale %d e esta na posicao A[%d][%d]",menor,i,j);
        }
    }
    for (i=0;i<6;i++)
    {
        for (j=0;j<6;j++)
        {
            soma=a[i][j]+soma;
        }
    }
    media=soma/36;
    printf ("\nMedia -> %d",media);
    printf ("\nDiagonal principal->");
    for (i=0;i<6;i++)
    {
        for (j=0;j<6;j++)
        {
            if (i==j)
                printf ("   %d",a[i][j]);
        }
    }
    for (j=0;j<6;j++)
    {
        for (i=0;i<6;i++)
        {
           ta[i][j]=a[j][i];
        }
    }
    printf ("\n\n    Matriz transposta de A\n\n");
    for (i=0;i<6;i++)
    {
        for (j=0;j<6;j++)
        {
            printf ("   %d",ta[i][j]);
        }
        printf ("\n");
    }
}
