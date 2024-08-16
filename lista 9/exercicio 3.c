#include <stdio.h>
#include <stdlib.h>
void calculo ()
{
    float salario=1,somasalario=0,mediasalario,maiorsalario,filhos,somafilhos=0,mediafilhos,pessoas=0,pessoasatemil=0,pctpessoas;
    while (salario>0)
    {
        printf ("\nDigite seu salario: ");
        scanf("%f",&salario);
        if (salario>0)
        {
        pessoas++;
        somasalario=salario+somasalario;
        if (salario<1000)
        {
            pessoasatemil++;
        }
        if (pessoas==1)
        {
            maiorsalario=salario;
        }
        if (salario>maiorsalario)
        {
            maiorsalario=salario;
        }
        printf ("\nQuantos filhos voce tem? ");
        scanf ("%f",&filhos);
        somafilhos=filhos+somafilhos;

        }

    }
    mediasalario=somasalario/pessoas;
    mediafilhos=somafilhos/pessoas;
    pctpessoas=pessoasatemil/pessoas*100;
    printf ("\nMedia de filhos -> %.0f \nMedia de salario -> %.0f \nMaior salario -> %.0f \nPercentual de pessoas com salario ate mil -> %.2f",mediafilhos,mediasalario,maiorsalario,pctpessoas);
}
int main ()
{
    printf ("Comeco\n");
    calculo ();
    printf ("\nFim!!!!");
    return 0;
}
