#include <stdio.h>
#include <conio.h>
int main()
{
    int nota;
    printf("Digite sua nota: ");
    scanf("%d",&nota);
    if((nota>=8)&&(nota<=10))
        printf("\nOtimo!\n");
    if((nota>=7)&&(nota<8))
        printf("\nBom!\n");
    if((nota>=5)&&(nota<7))
        printf("\nRegular.\n");
    if((nota<5))
        printf("\nInsatisfatorio.\n");
    system ("pause");
    return 0;
}
