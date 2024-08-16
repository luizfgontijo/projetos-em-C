#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a[n],soma=0,media,somatoria=0,dp,r,i;

    for (i=0;i<n;i++)
    {
        printf("\nDigite um termo: ");
        scanf("%d",&a[i]);
        soma=soma+a[i];
    }
    media=soma/n;
    for (i=0;i<n;i++)
    {
        somatoria=((a[i]-media),2);
    }
    dp=sqrt(somatoria);
    printf ("\nDesvio padrao -> %d",dp);
    return 0;
}
