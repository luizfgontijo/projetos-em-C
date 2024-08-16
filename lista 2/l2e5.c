#include <stdio.h>
int main()
{
    int x;
    float n1,n2,nsoma,nsub,nmult,ndiv;

    printf("\nDigite o primeiro numero: ");
    scanf("%f",&n1);
    printf("\nDigite o segundo numero: ");
    scanf("%f",&n2);
    printf("\nEscolha a operacao: (1) soma (2) subtracao (3) multiplicacao (4)divisao ");
    scanf("%d",&x);
    nsoma=n1+n2;
    nsub=n1-n2;
    nmult=n1*n2;
    ndiv=n1/n2;

    switch(x) {
    case 1: printf("Resultado= %f \n",nsoma);
    break;
    case 2: printf("Resultado= %f \n",nsub);
    break;
    case 3: printf("Resultado= %f \n",nmult);
    break;
    case 4: printf("Resultado= %f \n",ndiv);
    break;
    }
    system ("pause");
    return 0;
}
