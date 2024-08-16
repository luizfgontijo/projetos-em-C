#include<stdio.h>
#include<stdlib.h>
void p1 (int b[10][10])
{
    int i,j;
    printf ("\n\n   Matriz A\n\n");
    for (i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf ("   %d",b[i][j]);
        }
        printf ("\n");
    }
}
void p2 (int c[10][10])
{
    int i,j;
    printf ("\n\n\nDiagonal principal-> ");
    for (i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if (i==j)
            printf ("  %d",c[i][j]);
        }
    }
}
void p3 (int d[10][10])
{
    int i,j,t[10][10];
    for (i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            t[i][j]=d[j][i];
        }
    }
    printf ("\n\n   Matriz transposta de A\n\n");
    for (i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf ("   %d",t[i][j]);
        }
        printf ("\n");
    }
}
int p4 (int e[10][10])
{
    int i,j,soma=0,m;
    for (i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            soma=soma+e[i][j];
        }
    }
    m=soma/100;
    return m;
}
int main ()
{
    int a[10][10],i,j,media;
    for (i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            a[i][j]=i+(2*j);
        }
    }
    p1(a);
    p2(a);
    p3(a);
    media= p4(a);
    printf ("\nMedia  -> %d",media);
}
