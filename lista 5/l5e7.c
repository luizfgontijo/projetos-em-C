#include <stdio.h>
#include <conio.h>
int main ()
{
    int idade,somaidade=0,mediaidade;
    int peso,somapeso=0,mediapeso;
    int homem,mulher,x;
    int pessoas=0;
    while (pessoas<5)
    {
        printf ("\nA pessoa e (1)Homem ou (2)Mulher: ");
        scanf ("%d",&x);
        switch (x)
        {
            case 1: homem++;
            break;
            case 2: mulher++;
            break;
        }
        printf ("\nDigite a idade da pessoa: ");
        scanf ("%d",&idade);
        somaidade=somaidade+idade;
        printf ("\nDigite o peso da pessoa: ");
        scanf ("%d",&peso);
        somapeso=somapeso+peso;
        pessoas++;
    }
    printf ("\nO grupo possui %d homens e %dmulheres",homem,mulher);
    mediaidade=somaidade/5;
    printf ("\nA media das idades totais e de %d anos",mediaidade);
    mediapeso=somapeso/5;
    printf ("\nA media dos pesos totais e de %d kg\n",mediapeso);

}
