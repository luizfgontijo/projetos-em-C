#include <stdio.h>
#include <conio.h>
int main()
{
    int flag=1,homens=0,mulheres=0,ih,im,sih=0,mih,maiori=0,menori=0,pessoa=0,x;
    while (flag==1)
    {
    printf ("\nO que voce deseja? (1)Adicionar mais um homem (2)Adicionar mais uma mulher ");
    scanf("%d",&x);
    pessoa++;
    switch (x)
    {
        case 1: printf ("\nQual a idade do homem? ");
        scanf ("%d",&ih);
        homens++;
        sih=sih+ih;

        if (pessoa==1)
        {
            maiori=ih;
            menori=ih;
        }if (ih>maiori)
        {
            maiori=ih;
        }
        if (ih<menori)
        {
            menori=ih;
        }


        break;
        case 2: printf ("\nQual a idade da mulher? ");
        scanf ("%d",&im);
        mulheres++;
        if (pessoa==1)
        {
            maiori=im;
            menori=im;
        }
        if (im>maiori)
        {
            maiori=im;
        }
        if (im<menori)
        {
            menori=im;
        }


    }
    printf ("\nDeseja continuar o programa? (1)sim (2)nao ");
    scanf ("%d",&flag);
    }
    printf ("\nO numero de mulheres e %d\nO numero de homens e %d",mulheres,homens);
    mih=sih/homens;
    printf ("\nA media de idade dos homens e %d",mih);
    printf ("\nA maior idade verificada e %d",maiori);
    printf ("\nA menor idade verificada e %d",menori);
    return 0;
}
