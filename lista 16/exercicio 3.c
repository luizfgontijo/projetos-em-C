#include<stdio.h>
#include<stdlib.h>
void p1 (int c[3][5], int d[3][5])
{
    int i,j;
    printf ("\n\n   Matriz A \n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            printf ("   %d",c[i][j]);
        }
        printf ("\n");
    }
    printf ("\n\n   Matriz B \n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            printf ("   %d",d[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
void p2 (int d[3][5],int e[3][5])
{
    int i,j,c[3][5];
    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            c[i][j]=(2*d[i][j])+e[i][j];
        }
    }
    printf ("\n\n   Matriz C \n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            printf ("   %d",c[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
int p3 (int l[3][5])
{
    int i,j,maior;
    maior=l[0][0];
    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            if (l[i][j]>maior)
                maior=l[i][j];
        }
    }
    return maior;
}
int main ()
{
    int i,j,a[3][5],b[3][5],maiorA,maiorB,menorC;;
    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            a[i][j]=(3*i)-j;
            b[i][j]=(2*i)-(3*j);
        }
    }
    p1(a,b);
    p2(a,b);
    maiorA=p3(a);
     for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            if (maiorA==a[i][j])
                printf ("\nMaior elemento de A-> %d na posicao A[%d][%d]",maiorA,i+1,j+1);
        }
    }

    return 0;
}
