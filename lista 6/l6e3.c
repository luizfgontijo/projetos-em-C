#include <stdio.h>
#include <conio.h>
int main ()
{
    int flag=1,consumidores=0,consumo,media,soma=0,maiorc=0,menorc=0;
    while (flag==1)
    {

        printf ("\nDigite o consumo ");
        scanf ("%d",&consumo);
        soma=soma+consumo;
        consumidores++;

        if (consumidores==1)
                 {maiorc=consumo;
                  menorc=consumo;}


        if (consumo>maiorc)
            {maiorc=consumo;}
        if (consumo<menorc)
            {menorc=consumo;}
        printf ("\nTem mais algum consumidor? (1) sim (2)nao ");
        scanf ("%d",&flag);
    }
    media=soma/consumidores;
    printf ("\nA media de consumo foi de %d",media);
    printf ("\nO numero de consumidores foi %d",consumidores);
    printf ("\nO maior consumo foi %d",maiorc);
    printf ("\nO menor consumo foi %d",menorc);
    return 0;
}
