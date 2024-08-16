#include <stdio.h>
#include <conio.h>
int main ()
{
    int n,cg=0,cnp=0,cni=0,sp=0,mp,si=0,mi,sg=0,mg;
    while (n!=0)
    {
        printf ("\nDigite um numero: ");
        scanf ("%d",&n);
        cg++;
        sg=sg+n;
        if (n%2==0)
        {
            cnp++;
            sp=n+sp;
        }
        else {
            cni++;
            si=n+si;
        }
    }
    printf ("\n%d numeros pares",cnp);
    printf ("\n%d numeros impares",cni);
    mg=sg/cg;
    printf ("\nA media geral e=%d",mg);
    mi=si/cni;
    printf ("\nA media impar e=%d",mi);
    mp=sp/cnp;
    printf ("\nA media par e=%d",mp);

}
