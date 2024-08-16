#include <stdio.h>
#include <conio.h>
int main ()
{
    int cara=0,coroa=0,x,r=1;
    while (r==1)
    {
        printf ("\nCara (1) ou Coroa (2) ");
        scanf ("%d",&x);
        switch (x)
        {
            case 1: cara++;
            break;
            case 2: coroa++;
            break;
        }
        printf ("\nDeseja jogar mais? (1) sim (2) nao ");
        scanf ("%d",&r);
    }
    printf ("\nO numero de caras foi %d\n",cara);
    printf ("\nO numero de coroas foi %d\n",coroa);

    return 0;
}
