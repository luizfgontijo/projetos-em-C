#include <stdio.h>
#include <conio.h>
int main ()
{
    int homens=0,mulheres=0;
    int casado=0,solteiro=0;
    int nsolteiros=0,nsolteiras=0,np=0;
    int ncasados=0;
    int peso,altura,idade;
    int somaidade=0,mediaidade,cp=0;
    int somaidadems=0,mediaims;
    int somaphc=0,mediaphc;
    int somaAH=0,mediaAH;
    int somaPM=0,mediaPM;
    int r=1;
    int switchgenero,switchES;

    while (r==1)
    {
    cp++;
    printf ("\nHomem (1) ou Mulher (2): ");
    scanf ("%d",&switchgenero);
    switch (switchgenero)
    {
        case 1: homens++;
        case 2: mulheres++;
    }

    printf ("\nEstado civil (1) casado ou (2) solteiro: ");
    scanf ("%d",&switchES);
    switch (switchES)
    {
        case 1: casado++;
        case 2: solteiro++;
    }

    printf ("\nDigite o peso: ");
    scanf ("%d",&peso);

    printf ("\nDigite a altura em cm: ");
    scanf ("%d",&altura);

    printf ("\nDigite a idade: ");
    scanf ("%d",&idade);
    somaidade=idade+somaidade;

    if ((switchgenero==1)&&(switchES==2))
    {
        nsolteiros++;
    }
    if ((switchgenero==1)&&(switchES==1))
    {
        ncasados++;
    }
    if ((switchgenero==2)&&(switchES==2))
    {
        nsolteiras++;
    }

    if ((switchgenero==2)&&(switchES==2))
    {
        somaidadems=idade+somaidadems;
    }

    if ((switchgenero==1)&&(switchES==1))
    {
        somaphc=peso+somaphc;
    }

    if ((idade>=30)&&(idade<=40)&&(altura>=170)&&(switchES==2))
    {
        np++;
    }
    if (switchgenero==1)
    {
        somaAH=altura+somaAH;
    }
    if (switchgenero==2)
    {
        somaPM=peso+somaPM;
    }

    printf ("\nDeseja continuar o programa? (1) sim (2) nao: ");
    scanf ("%d",&r);

    }
    printf ("\n%d homens solteiros, %d mulheres solteiras",nsolteiros,nsolteiras);

    mediaims=somaidadems/nsolteiras;
    printf ("\nA media de idade das mulheres solteiras e = &d",mediaims);

    mediaphc=somaphc/ncasados;
    printf ("\nO peso medio dos homens casados e = %d",mediaphc);

    printf ("\no numero de pessoas com idade entre 30 e 40 anos, solteiras e que medem acima de 1.70 m = %d",np);

    mediaidade=somaidade/cp;
    printf ("\nA media de idade do grupo e = %d",mediaidade);

    mediaAH=somaAH/homens;
    printf ("\nA media de altura dos homens = %d",mediaAH);

    mediaPM=somaPM/mulheres;
    printf ("\nA media do peso das mulheres = %d",mediaPM);

    return 0;
}
