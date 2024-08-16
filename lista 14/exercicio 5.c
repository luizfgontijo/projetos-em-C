#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c[8],t[8],i,maior,menor,tipomaior=0,tipomenor,soma=0,media,cr=0,cc=0,ci=0;
    for (i=0;i<8;i++)
    {
        printf ("\nDigite seu tipo de consumo: (Residenciais=1 / Comerciais=2 / Industriais =3). ");
        scanf ("%d",&t[i]);
        printf ("\nDigite seu consumo: ");
        scanf ("%d",&c[i]);
    }

    for (i=0;i<8;i++)
    {
        if (t[i]==1)
            cr++;
        if (t[i]==2)
            cc++;
        if (t[i]==3)
            ci++;
    }
    printf ("\n%d consumidores residenciais\n%d consumidores comerciais\n%d consumidores industriais.",cr,cc,ci);
    for (i=0;i<8;i++)
    {
        if (i==0)
            maior=c[i];
            menor=c[i];
        if (c[i]>maior)
            maior=c[i];
            tipomaior=t[i];
        if (c[i]<menor)
            menor=c[i];
            tipomenor=t[i];
    }
    printf ("\nMaior consumo -> %d, que foi notado no tipo %d",maior,t[i]);
    printf ("\nMenor consumo -> %d, que foi notado no tipo %d",menor,t[i]);
    for (i=0;i<8;i++)
    {
        if (t[i]==3)
            printf ("\nConsumo industrial -> %d",c[i]);
        if (t[i]==1)
            soma=soma+c[i];
            media=soma/cr;
        if (t[i]==2)
            printf ("\nConsumo comercial -> %d",c[i]);
    }
    printf ("\nMedia do consumo residencial-> %d",media);

}
