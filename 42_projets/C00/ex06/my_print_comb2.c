#include "../../../includes/aferron.h"

void my_affichage(int a, int b, int c, int d)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(' ');
    my_putchar(c);
    my_putchar(d);
    if(b != '8')
    {
        my_putchar(',');
        my_putchar(' ');
    }
    else if(a != '9')
    {
        my_putchar(',');
        my_putchar(' ');
    }
}

void my_print_comb2(void)
{
    int a;
    int b;
    int c;
    int d;

    a = '0';
    b = '0';
    c = '0';
    d = '1';

    while(a <= '9')
    {
        while(b <= '8')
        {
            while(c <= '9')
            {
                while(d <= '9')
                {
                    my_affichage(a, b, c, d);
                    d++;
                }
                d = '0';
                c++;
            }
            b++;
            c = a;
            d = b + 1;
        }
        a++;
        b = '0';
        c = a;
        d = b + 1;
    }
    
}
/*
int main(void)
{
    my_print_comb2();
}
*/