#include <stdio.h>
#include <conio.h>
int main()
{
    int cp=0;
    int x,y;
    int votosim=0;
    int votonao=0;
    int homem=0;
    int mulher=0;
    int mulhersim=0;
    int homemnao=0;


    while (cp<7)
    {
        printf ("\nDigite o seu voto (1)sim (2)nao\n");
        scanf ("%d",&x);
        switch (x)
        {
            case 1: votosim++;
            break;
            case 2: votonao++;
            break;
        }
        printf ("\nVoce e homem ou mulher (1)homem (2)mulher\n");
        scanf ("%d",&y);
        switch (y)
        {
            case 1: homem++;
            break;
            case 2: mulher++;
            break;
        }
    if ((x==1)&&(y==2))
        mulhersim++;
    if ((x==2)&&(y==1))
        homemnao++;
    cp++;
    }
    printf ("\n%d votaram sim e %d votaram nao", votosim,votonao);
    printf ("\n%d homens e %d mulheres",homem,mulher);
    printf ("\n%d sao mulheres e votaram sim",mulhersim);
    printf ("\n%d sao homens e votaram nao",homemnao);
    return 0;
}
