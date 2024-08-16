#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct computador{
    int memoria;
    char nome[20];
    int cobranca[3];
}computador;

int main ()
{
    int i,j;
    computador lista[5];

    for (i=0;i<5;i++)
    {
        printf ("\nQual a memoria do computador? ");
        scanf ("%d",&lista[i].memoria);
        printf ("\nQual o nome do computador? ");
        scanf ("%s",&lista[i].nome);
        for (j=0;j<3;j++)
        {
            printf ("\nInsira a cobranca do mes: ");;
            scanf ("%d",lista[i].cobranca);
        }
    }

    for (i=0;i<5;i++)
    {
        printf ("\nMemoria -> %d",lista[i].memoria);
        printf ("\nNome -> %s",lista[i].nome);
        for (j=0;j<3;j++)
        {
            printf ("\nCobranca-> %d",lista[i].cobranca[j]);
        }
    }
}
