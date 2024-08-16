#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int votoj=0,votom=0,somaidade=0,mediaidade,idade,genero,r,i[5],v[5],g[5],hvj=0,hva=0,mvj=0,mva=0;
    for (r=0;r<5;r++)
    {
        printf ("\nDigite seu voto (1)Joao e (2)Ana: ");
        scanf ("%d",&v[r]);
        printf ("\nDigite sua idade: ");
        scanf ("%d",&i[r]);
        printf ("\nHomem (1) ou Mulher (2): ");
        scanf ("%d",&g[r]);
    }
    for (r=0;r<5;r++)
    {
        somaidade=somaidade+i[r];
    }
    mediaidade=somaidade/5;
    printf ("\nMedia das idades dos eleitores-> %d",mediaidade);
    for (r=0;r<5;r++)
    {
        if (v[r]==1)
            votoj++;
        if (v[r]==2)
            votom++;
    }
    printf ("\n%d votos em joao!!\n%d votos em ana!!",votoj,votom);
    for (r=0;r<5;r++)
    {
        if ((v[r]==2)&&(g[r]==2))
            printf ("\nIdade da %d mulher que votou em ana: %d",r,i[r]);
        if ((v[r]==1)&&(g[r]==1))
            printf ("\nIdade do %d homem que votou em joao: %d",r,i[r]);
    }
    for (r=0;r<5;r++)
    {
       if ((g[r]==1)&&(v[r]==1))
        hvj++;
       if ((g[r]==2)&&(v[r]==1))
        mvj++;
       if ((g[r]==1)&&(v[r]==1))
        hva++;
       if ((g[r]==2)&&(v[r]==1))
        mvj++;
    }
    if (votoj>votom)
            printf ("\nJoao ganhou as eleicoes com %d votos masculinos e %d votos femininos!!\n\n",hvj,mvj);
        else
            printf ("\nAna ganhou as eleicoes com %d votos masculinos e %d votos femininos!!\n\n",hva,mva);
    return 0;

}
