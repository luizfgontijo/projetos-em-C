#include <stdio.h>
#include <conio.h>
int main ()
{
    int flag=1;
    float soma,media,n,pctn,pctp,contadornegativos,contadorpositivos,contadortotais;
    while (flag==1)
    {
        printf ("\nEscreva um numero: ");
        scanf ("%f",&n);
        soma=n+soma;
        contadortotais++;
        if (n<0)
        {
            contadornegativos++;
        }
        else {contadorpositivos++;}
        printf ("\nDeseja continuar?  (1)sim ou (2)nao ");
        scanf ("%d",&flag);
    }
    media=soma/contadortotais;
    printf ("\nA media dos numeros e= %.1f",media);
    pctn=(contadornegativos/contadortotais)*100;
    printf ("\nPercentual de negativos: %.0f %",pctn);
    pctp=(contadorpositivos/contadortotais)*100;
    printf ("\nPercentual de positivos: %.0f %",pctp);
    return 0;
}
