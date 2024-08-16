#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    int i,idade[5],end[5],maiori;
    char nome[5][20],gen[5][6];
    for (i=0;i<5;i++)
    {
        printf ("\nVoce e homem ou mulher? ");
        scanf ("%s",&gen[i]);
        printf ("\nInsira seu nome: ");
        scanf ("%s",&nome[i]);
        printf ("\nInsira sua idade: ");
        scanf ("%d",&idade[i]);
        printf ("\nInsira seu endereco: ");
        scanf ("%d",&end[i]);
    }
    for (i=0;i<5;i++)
    {
        printf("\n%s tem %d anos",nome[i],idade[i]);
    }
    maiori=idade[0];
    for (i=0;i<5;i++)
    {
        if (idade[i]>maiori)
            maiori=idade[i];
    }
    for (i=0;i<5;i++)
    {
        if (idade[i]==maiori)
            printf ("\n%s e a pessoa mais velha, com %d anos",nome[i],maiori);
    }
}
