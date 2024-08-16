#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    int i;
    char nome[5][20],surname[5][20];
    for (i=0;i<5;i++)
    {
        printf ("\nQual o seu nome? ");
        scanf ("%s",&nome[i]);
        printf ("\nQual o seu sobrenome? ");
        scanf ("%s",&surname[i]);
        strncat(nome[i],surname[i],20);
        printf ("\n%s",nome[i]);
    }
}
