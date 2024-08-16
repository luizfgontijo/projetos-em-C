#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
    int r=1,genero,voto,idade,si1=0,mi1,cm=0,ch=0,cmn=0,chs=0,si2=0,mi2,c1=0,c2=0,vs=0,vn=0;
    while (r==1)
    {
        printf ("\nDigite a idade: ");
        scanf ("%d",&idade);
        printf ("\nDigite o genero (1) homem ou (2) mulher: ");
        scanf ("%d",&genero);
        printf ("\nDigite o voto: (1) sim ou (2) nao: ");
        scanf ("%d",&voto);
        if ((genero==2)&&(voto==1))
            c1++;
        if ((voto==2)&&(genero==1)&&(idade<18))
            c2++;
        if ((genero==2)&&(voto==2))
        {
            si1=si1+idade;
            cmn++;
        }
        if ((genero==1)&&(voto==1))
        {
            si2=si2+idade;
            chs++;
        }
        if (genero==1)
        {
            ch++;
        }
        if (genero==2)
        {
            cm++;
        }
        if (voto==1)
        {
         vs++;
        }
        if (voto==2)
        {
            vn++;
        }
        printf ("\nDeseja adicionar mais pessoas? (1)sim (2)nao: ");
        scanf ("%d",&r);
    }
    mi1=si1/cmn;
    mi2=si2/chs;
    printf ("\no numero de votos sim, das mulheres-> %d",c1);
    printf ("\no numero de votos (nao) dos homens com menos de 18 anos -> %d",c2);
    printf ("\n a media das idades das mulheres que falaram nao-> %d",mi1);
    printf ("\n a media das idades dos homens que falaram sim-> %d",mi2);
    printf ("\nHomens totais -> %d",ch);
    printf ("\nMulheres totais -> %d",cm);
    printf ("\nVotos sim -> %d",vs);
    printf ("\nVotos nao -> %d",vn);
}
