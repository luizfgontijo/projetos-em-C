#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main ()
{
    int i;
    char usuario[5][20],senha[5][20],tuser[20],tsenha[20];
    for (i=0;i<5;i++)
    {
        printf ("\nDigite o usuario: ");
        fgets(usuario[i],20,stdin);
        printf ("\nDigite a senha: ");
        fgets(senha[i],20,stdin);
    }
    printf ("\nDeseja buscar dados de qual usuario? ");
    fgets(tuser,20,stdin);
    for (i=0;i<5;i++)
    {
        if (strcmp(tuser,usuario[i])==0)
        {
            printf ("\nQual a senha?");
            fgets (tsenha,20,stdin);
            if (strcmp(tsenha,senha[i])==0)
            {
                printf ("\nUsuario correto!!");
            }
            else
                printf ("\nSenha invalida!!");
        }
    }
}
