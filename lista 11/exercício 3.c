#include <stdio.h>
#include <stdlib.h>

int programaA(int nota1, int nota2, int nota3)
{
    int mA;
    mA= (nota1+nota2+nota3)/3;
    return mA;
}

int programaP (int nota1, int nota2, int nota3)
{
    int mP;
    mP= ((nota1*5)+(nota2*3)+(nota3*2))/10;
    return mP;
}

int main ()
{
    int alunos,i,x,n1,n2,n3,media;
    printf ("Quantos alunos? ");
    scanf ("%d",&alunos);
    for (i=1;i<=alunos;i++)
    {
        printf ("\nQual a sua primeira nota? ");
        scanf ("%d",&n1);
        printf ("\nQual a sua segunda nota? ");
        scanf ("%d",&n2);
        printf ("\nQual a sua terceira nota? ");
        scanf ("%d",&n3);
        printf ("\nA partir de qual procedimento voce deseja calcular suas notas? (1) A ou (2) P: ");
        scanf ("%d",&x);
        if(x==1)
        {
            media=programaA(n1,n2,n3);
            printf ("\nMedia -> %d\n",media);
        }
        if (x==2)
        {
            media=programaP(n1,n2,n3);
            printf ("\nMedia -> %d\n",media);
        }
    }
    return 0;
}
