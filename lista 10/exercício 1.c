#include <stdio.h>
#include <stdlib.h>
void dolar(float v1)
{
    float d,vf;
    printf ("\nQual e o valor do dolar hoje? \n");
    scanf ("%f",&d);
    vf=v1/d;
    printf ("Voce tem %.2f dolares",vf);
}

void euro (float v2)
{
    float e,vf;
    printf ("\nQual e o valor do euro hoje? ");
    scanf ("%f",&e);
    vf=v2/e;
    printf ("Voce tem %.2f euros\n",vf);
}

void libra (float v3)
{
    float l,vf;
    printf ("\nQual e o valor da libra hoje? ");
    scanf ("%f",l);
    vf=v3/l;
    printf ("Voce tem %.2f libras\n",vf);
}

int main ()
{
    float valor;
    int x,r=1;
    while (r==1)
    {
    printf ("Qual valor voce deseja converter? ");
    scanf ("%f",&valor);
    printf ("\nPara qual moeda voce deseja realizar a conversao? (1) dolar (2) euro (3)libra ");
    scanf ("%d",&x);
    switch(x)
    {
        case 1: dolar(valor);
        break;
        case 2: euro(valor);
        break;
        case 3: libra(valor);
    }
    printf ("\nDeseja continuar? (1) sim (2) nao ");
    scanf ("%d",&r);
    }
    return 0;
}
