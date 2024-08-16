#include <stdio.h>
int main ()
{
     int b, h, x;
     float areaquadrado, arearetangulo, areatriangulo, areacubo;

     printf("Digite o valor da base ");
     scanf("%d",&b);
     printf("\nDigite o valor da altura ");
     scanf("%d",&h);

     printf("\nEscolha qual area voce deseja calcular: (1)Quadrado (2)Retangulo (3)triangulo (4)cubo ");
     scanf("%d",&x);

     areaquadrado=b*h;
     areacubo=(b*h)*(6);
     areatriangulo=(b*h)/(2);
     arearetangulo=b*h;

     switch (x){
     case 1: printf("area quadrado= %f \n",areaquadrado);
     break;
     case 2: printf("area retangulo= %f \n",arearetangulo);
     break;
     case 3: printf("area triangulo= %f \n", areatriangulo);
     break;
     case 4: printf("area cubo= %f \n", areacubo);
     break;
     }
     system ("pause");
     return 0;
}
