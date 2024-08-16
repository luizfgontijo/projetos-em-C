#include <stdio.h>
#include <conio.h>
int main ()
{
    int y,res=0,cr,com=0,cc,somacr=0,somacc=0,somatotal,mediacr,mediacc,mediatotal,x=1;
    while (x==1)
    {
        printf ("\nQual e o tipo de consumidor? (1) residente ou (2) comercio ");
        scanf ("%d",&y);
        switch (y)
        {
            case 1: res++;
            printf ("\nQual foi o consumo? ");
            scanf ("%d",&cr);
            somacr=somacr+cr;
            break;

            case 2: com++;
            printf ("\nQual foi o consumo? ");
            scanf ("%d",&cc);
            somacc=somacc+cc;
            break;

        }
        printf ("\nExistem mais contadores? (1)sim (2) nao ");
        scanf ("%d",&x);
    }
    printf ("\nA quantidade de consumidores de cada tipo: %d residentes e %d comerciantes.",res,com);
    mediacr=somacr/res;
    printf ("\nA media de consumo das residencias foi %d",mediacr);
    mediacc=somacc/com;
    printf ("\nA media de consumo do comercio foi de %d",mediacc);
    mediatotal=(somacr+somacc)/(res+com);
    printf ("\nA media de consumo do bairro foi de %d",mediatotal);

    return 0;
}
