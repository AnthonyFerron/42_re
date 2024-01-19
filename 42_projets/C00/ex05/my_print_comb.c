#include "../../../includes/aferron.h"

void my_affichage(int a, int b, int c)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);
    if(a != '7')
    {
        my_putchar(',');
        my_putchar(' ');
    }
}

void my_print_comb()
{
    int a;
    int b;
    int c;
    
    a = '0';
    b = '1';
    c = '2';

    while(a < '9')
    {
        while(b < '9')
        {
            while(c <= '9')
            {
                my_affichage(a, b, c);
                c++;
            }
            c = b + 2;
            b++;
        }
        b = a + 1;
        a++;
    }
}

int main(void)
{
    my_print_comb();
    return(0);
}
