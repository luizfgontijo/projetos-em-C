#include <stdio.h>
int main ()
{
    float temp1,temp2,temp3,tempM;
    printf("informe a primeira temperatura medida: ");
    scanf("%f",&temp1);
    printf("\ninforme a segunda temperatura medida: ");
    scanf("%f",&temp2);
    printf("\ninforme a terceira temperatura medida: ");
    scanf("%f",&temp3);

    tempM=(temp1+temp2+temp3)/3;

    if (tempM<=10)
        printf("\nMuito Frio!\n");
    if ((tempM>10)&& (tempM<=20))
        printf("\nFrio!\n");
    if ((tempM>20)&& (tempM<=30))
        printf("\nQuente!\n");
    if (tempM>30)
        printf("\nMuito quente!\n");
    system ("pause");
    return 0;

}
