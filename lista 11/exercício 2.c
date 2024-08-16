#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int alunos;
    printf ("Quantos alunos? ");
    scanf ("%d",&alunos);
    programa (alunos);
    return 0;
}
int programa (int n)
{
    int nota,i;
    for (i=1;i<=n;i++)
    {
    printf ("\nDigite sua nota: ");
    scanf ("%d",&nota);
    if (nota<=39)
        printf("Conceito F\n");
    if ((nota>=40)&&(nota<=59))
        printf ("Conceito E\n");
    if ((nota>=60)&&(nota<=69))
        printf ("Condeito D\n");
    if ((nota>=70)&&(nota<=79))
        printf ("Conceito C\n");
    if ((nota>=80)&&(nota<=89))
        printf ("Conceito B\n");
    if (nota>=90)
        printf ("Conceito A\n");
    }
    return 0;
}
