#include <stdio.h>
#include <conio.h>
int main ()
{
    float eleitores=0;
    float joao=0;
    float maria=0;
    float nulo=0;
    float pctnulo;
    int x;
    while (eleitores<8)
    {
        printf ("Voto: (1)Joao (2)Maria (3)Nulo: ");
        scanf ("%d",&x);
        switch (x)
        {
            case 1: joao++;
            break;
            case 2: maria++;
            break;
            case 3: nulo++;
            break;
        }
        eleitores++;
    }
    printf ("\nJoao recebeu %.0f votos e Maria recebeu %.0f votos",joao,maria);
    printf ("\n%.0f nulo",nulo);
    if ((joao>maria)&&(joao>nulo))
        printf ("\njoao venceu as eleicoes\n");
    if ((maria>joao)&&(maria>nulo))
        printf ("\nmaria venceu as eleicoes\n");
    if ((nulo>joao)&&(nulo>maria))
        printf ("\na eleicao nao teve vencedor\n");
    if ((nulo>joao)&&(maria>nulo))
        printf ("\nmaria venceu as eleicoes\n");
    if ((nulo>maria)&&(joao>nulo))
        printf ("\njoao venceu as eleicoes");

    pctnulo=(nulo/8)*100;
    printf ("%\n%.2f%% votaram nulo\n",pctnulo);
    return 0;
}
