#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i,j,a[10][3],ar=0,maior;
    for (i=0;i<10;i++)
    {
        for (j=0;j<1;j++)
        {
            printf ("\nInsira a media das provas do aluno %d: ",i+1);
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0;i<10;i++)
    {
        for (j=1;j<2;j++)
        {
            printf ("\nInsira a media dos trabalhos do aluno %d: ",i+1);
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0;i<10;i++)
    {
        for (j=2;j<3;j++)
        {
            a[i][2]=a[i][1]+a[i][0];
        }
    }
    for (i=0;i<10;i++)
    {
            printf ("\nMedia final do aluno %d-> %d",i,a[i][2]);
    }
    maior=a[0][0];
    for (i=0;i<10;i++)
    {
        j=2;
        if(a[i][j]>maior);
        maior=a[i][j];
    }
    for (i=0;i<10;i++)
    {
        j=2;
            if (a[i][j]<60)
                ar++;
                printf ("\nAluno reprovado, pois a nota nao atingiu 60 (%d)",a[i][2]);
    }
    printf ("\nNumero de alunos reprovados -> %d",ar);
    printf ("\nMaior nota->%d",maior);
}
