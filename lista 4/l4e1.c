#include <stdio.h>
#include <conio.h>
int main ()
{
    int nota,media;
    int soma=0;
    int alunos=0;
    while (alunos<10){
        printf ("Digite a nota do aluno: ");
        scanf ("%d",&nota);
        soma=soma+nota;
        alunos=1+alunos;
        }
    media=soma/10;
    printf ("\nA media entre as notas e %d\n",media);
}
