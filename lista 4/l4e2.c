#include <stdio.h>
#include <conio.h>
int main()
{
    int soma=0;
    int pessoas=0;
    int peso,media,x;
    int homem=0;
    int mulher=0;

    while(pessoas<5)
    {
        printf ("\nDigite o peso de cada pessoa: ");
        scanf ("%d",&peso);
        soma=soma+peso;
        printf ("\nA pessoa e (1)Homem ou (2)Mulher: ");
        scanf ("%d",&x);
        switch (x)
        {
            case 1: homem++;
            break;
            case 2: mulher++;
            break;
        }

        pessoas++;

    }
    printf ("\nO grupo possui %d mulheres e %d homens",mulher,homem);
    media=soma/5;
    printf("\nA media dos pesos das pessoas e igual a %d",media);
    if (homem>mulher)
        printf ("\nO grupo possui mais homens\n");
    else printf ("\nO grupo possui mais mulheres\n");
    system ("pause");
    return 0;
}
