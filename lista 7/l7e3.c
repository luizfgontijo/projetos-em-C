#include <stdio.h>
#include <conio.h>
int main ()
{
    float c,f;
    for (f=50;f<=100;f=f+5)
    {
        c=5/9+(f-32);
        printf ("\nSe f=%.0f, entao c=%.2f",f,c);
    }
    return 0;
}
