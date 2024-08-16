#include <stdio.h>
#include <stdlib.h>
void p1(int a2[4][5],int b2[4][5])
{
    int i,j,c[4][5],t[5][4],menor,maior,posimaior=0,posjmaior=0,posimenor=0,posjmenor=0;
    for (i=0;i<4;i++)
        {
            for (j=0;j<5;j++)
            {
                c[i][j]=(2*a2[i][j])-(3*b2[i][j]);
            }
        }
    printf ("\n\n    Matriz C\n\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
            printf ("   %d",c[i][j]);
        }
        printf ("\n");
    }
    for (i=0;i<5;i++)
        {
            for (j=0;j<4;j++)
            {
                t[i][j]=c[j][i];
            }
        }
        printf ("\n\n Matriz transposta de C\n\n");
        for (i=0;i<5;i++)
        {
            for (j=0;j<4;j++)
            {
                printf ("   %d",t[i][j]);
            }
            printf ("\n");
        }
        menor=c[0][0];
        maior=c[0][0];
         for (i=0;i<4;i++)
        {
            for (j=0;j<5;j++)
            {
                if (c[i][j]>maior)
                {
                    maior=c[i][j];
                    posimaior=i;
                    posjmaior=j;
                }
            }
        }
        for (i=0;i<4;i++)
        {
            for (j=0;j<5;j++)
            {
                if (c[i][j]<menor)
                {
                    menor=c[i][j];
                    posimenor=i;
                    posjmenor=j;
                }
            }
        }
        printf ("\nMaior de C vale %d e esta na posicao C[%d][%d]",maior,posimaior,posjmaior);
        printf ("\nMenor de C vale %d e esta na posicao C[%d][%d]",menor,posimenor,posjmenor);
}
int main ()
{
        int i,j,a[4][5],b[4][5];
        for (i=0;i<4;i++)
        {
            for (j=0;j<5;j++)
            {
                a[i][j]=i+j;
            }
        }
        for (i=0;i<4;i++)
        {
            for (j=0;j<5;j++)
            {
                b[i][j]=(3*i)+j;
            }
        }
        printf ("\n\n    Matriz A\n\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
            printf ("   %d",a[i][j]);
        }
        printf ("\n");
    }
    printf ("\n\n    Matriz B\n\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
            printf ("   %d",b[i][j]);
        }
        printf ("\n");
    }
        p1(a,b);
}
