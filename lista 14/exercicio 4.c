#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int v[9],g[9],i,votosim=0,votosnao=0,ms=0,mn=0,hs=0,hn=0;
    for (i=0;i<9;i++)
    {
        printf ("\nDigite seu voto: (1) sim ou (2) nao: ");
        scanf ("%d",&v[i]);
        printf ("\nDigite seu genero (1) homem ou (2) mulher: ");
        scanf ("%d",&g[i]);
    }
    for (i=0;i<9;i++)
    {
        if (v[i]==1)
            votosim++;
        if (v[i]==2)
            votosnao++;
    }
    for (i=0;i<9;i++)
    {
        if ((g[i]==1)&&(v[i]==1))
            hs++;
        if ((g[i]==2)&&(v[i]==1))
            ms++;
        if ((g[i]==1)&&(v[i]==2))
            hn++;
        if ((g[i]==2)&&(v[i]==2))
            mn++;
    }
    printf ("\n%d votos sim!!\n%d votos nao!!",votosim,votosnao);
    printf ("\n%d mulheres que votaram sim!\n%d mulheres que votaram nao!\n%d homens que votaram sim!\n%d homens que votaram nao!",ms,mn,hs,hn);
    for (i=0;i<9;i++)
    {
        if (g[i]==1)
            printf ("\nHomem %d votou %d",i,v[i]);
    }
    for (i=0;i<9;i++)
    {
        if (g[i]==2)
            printf ("\nMulher %d votou %d",i,v[i]);
    }
    for (i=0;i<9;i++)
    {
        if (g[i]==1)
            printf ("\nHomem %d votou %d",i,v[i]);
        if (g[i]==2)
            printf ("\nMulher %d votou %d",i,v[i]);
    }
    return 0;
}
