#include <stdio.h>
#include <conio.h>
int main ()
{
    int salarioatual,x,novosalario;

    printf ("Digite seu salario atual ");
    scanf ("%d",&salarioatual);
    printf("\nDigite a variacao salarial (1)aumento de 8 por cento (2)aumento de 11 por cento (3)aumento fixo ");
    scanf ("%d",&x);
    switch (x){
        case 1: novosalario=salarioatual*1.08;
        printf ("\nSeu novo salario e de %d\n",novosalario);
        break;

        case 2: novosalario=salarioatual*1.11;
        printf ("\nSeu novo salario e de %d\n",novosalario);
        break;

        case 3:
            if (salarioatual<=1000)
            {novosalario=salarioatual+350;
            printf("\nSeu novo salario e de %d\n",novosalario);}
            else {novosalario=salarioatual+200;
            printf("\nSeu novo salario e de %d\n",novosalario);};

        }
        system ("pause");
        return 0;

}
