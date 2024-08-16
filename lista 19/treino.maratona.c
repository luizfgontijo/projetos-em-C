#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palavra[22],invertida[22];
    int i,tamanho,j;
    printf ("\nQual e a palavra? ");
    scanf ("%s", palavra);

    tamanho= strlen(palavra)-1;
    j = tamanho;

    for (i=0;i<=tamanho;i++)
    {
        invertida[j]=palavra[i];
        j--;
    }
    printf ("%s %s",palavra,invertida);
    if (strcmp(palavra,invertida)==0)
    {
        printf ("\nPalindromo!");
    }
    else {
        printf ("\nNao e!!");
    }
}
