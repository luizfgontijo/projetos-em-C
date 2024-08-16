#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{

    int i,respuser,respsenha;
    char usuario[3][20],senha[3][20];
    char tuser[20],tsenha[20];
    for (i=0;i<3;i++)
    {
        printf ("\nDigite o usuario: ");
        scanf ("%s",&usuario[i]);
        printf ("\nDigite a senha usada por ele: ");
        scanf ("%s",&senha[i]);
    }
    printf ("\n\n\nQual o seu usuario? ");
    scanf ("%s",&tuser);
    printf ("\nQual a senha? ");
    scanf ("%s",&tsenha);
    for (i=0;i<3;i++)
    {
        respuser= strcmp(tuser,usuario[i]);
        respsenha=strcmp(tsenha,senha[i]);
        if (respuser==0)
        {
            printf ("\nUsuario correto!!");
        if (respsenha==0)
        {
            printf ("\nSenha correta!!");
            break;
        }
        if (respsenha!=0)
        {

            printf ("\nSenha incorreta!!");
        }
        if (respuser!=0)
    {
        printf ("\nDados errados!!");
    }
        }
    }
}
