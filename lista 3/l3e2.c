#include <stdio.h>
#include <conio.h>
int main()
{
    int anasc,aatual,i,x;
    printf("Digite o ano de nascimento: ");
    scanf("%d",&anasc);
    printf("\nDigite o ano atual: ");
    scanf("%d",&aatual);
    printf("\nVoce ja fez aniversario esse ano: (1)sim (2)nao ");
    scanf("%d",&x);
    switch(x){
        case 1: i=aatual-anasc;
    break;
        case 2: i=aatual-anasc-1;
    break;
    }
    if(i>=18)
       {printf("\nVoce pode tirar a carteira de motorista, uma vez que voce tem %d anos.\n",i);}

       else
            {printf("\nVoce nao pode tirar carteira de motorista, uma vez que voce tem %d anos.\n",i);}
    system ("pause");
    return 0;
    }

