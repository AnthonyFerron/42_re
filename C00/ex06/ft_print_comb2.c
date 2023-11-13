#include "../../includes/aferron.h"

void ft_affichage(int a, int b, int c, int d)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(' ');
    ft_putchar(c);
    ft_putchar(d);
    if(b != '8')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
    else if(a != '9')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb2(void)
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
                    ft_affichage(a, b, c, d);
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
    ft_print_comb2();
}
*/