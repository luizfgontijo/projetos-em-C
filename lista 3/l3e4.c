#include <stdio.h>
#include <conio.h>
int main()
{
    int velocidademaxima,velocidadeatual;

    printf("Digite a velocidade maxima da via: ");
    scanf("%d",&velocidademaxima);
    printf("\nDigite a velocidade atual do carro: ");
    scanf("%d",&velocidadeatual);
    if (velocidademaxima>=velocidadeatual)
        printf("\nMotorista respeitou a lei.\n\n");
    if ((velocidadeatual>=velocidademaxima)&&(velocidademaxima+10>=velocidadeatual))
        printf("\nMotorista deve pagar 50 reais de multa.\n\n");
    if ((velocidadeatual>=velocidademaxima+11)&&(velocidademaxima+30>=velocidadeatual))
        printf("\nMotorista deve pagar 100 reais de multa.\n\n");
    if ((velocidadeatual>velocidademaxima+30))
        printf("\nMotorista deve pagar 200 reais de multa.\n\n");

    system ("pause");
    return 0;
}
