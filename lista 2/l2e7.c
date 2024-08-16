#include <stdio.h>
int main()
{
    int d,v,t,x;
    printf ("Qual grandeza voce deseja calcular: (1) distancia (2) tempo (3) velocidade ");
    scanf ("%d",&x);
    switch (x){
    case 1: printf("Informe o tempo ");
            scanf("%d",&t);
            printf("\nInforme a velocidade ");
            scanf("%d",&v);
            d=v*t;
            printf("\nA distancia foi de %d \n",d);
    break;
    case 2: printf("\nInforme a distancia ");
            scanf("%d",&d);
            printf("\nInforme a velocidade ");
            scanf("%d",&v);
            t=d/v;
            printf("\nO tempo foi de %d \n",t);
    break;
    case 3: printf("\nInforme o tempo ");
            scanf("%d",&t);
            printf("\nInforme a distancia ");
            scanf("%d",&d);
            v=d/t;
            printf("\nA velocidade foi de %d \n",v);
    break;
    }
    system ("pause");
    return 0;

}
