#include <stdio.h>
#include <conio.h>
int main()
{
    float valornormal,valorpromocional,totalcom80,totalcom50,diferenca;

    printf ("Digite o valor normal da diaria: ");
    scanf ("%f",&valornormal);
    valorpromocional=valornormal*0.75;
    printf ("\nO valor promocional da diaria e de %f\n",valorpromocional);
    totalcom80=75*valornormal*0.75*0.8;
    printf ("O valor total arrecadado com 80 por cento de ocupacao e diaria promocional e de %f\n",totalcom80);
    totalcom50=75*valornormal*0.5;
    printf ("O valor total arrecadado com 50 por cento de ocupacao e diaria normal e de %f\n",totalcom50);
    diferenca=totalcom80-totalcom50;
    printf ("A diferenca entre os valores e de %f\n",diferenca);

    system ("pause");
    return 0;

}
