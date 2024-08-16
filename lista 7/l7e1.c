#include <stdio.h>
#include <conio.h>
int main()
{
int f,nota,soma=0,maior,media,menor;
for (f=1;f<=10;f++)
{
    printf ("\nDigite a nota: ");
    scanf ("%d",&nota);
    soma=soma+nota;
    if (f==1)
    {
        maior=nota;
        menor=nota;
    }
    if (nota>maior)
    {
        maior=nota;
    }
    if (nota<menor)
    {
        menor=nota;
    }

}
media=soma/10;
printf ("\nA media foi %d",media);
printf ("\nA maior nota foi %d",maior);
printf ("\nA menor nota foi %d",menor);
return 0;
}
