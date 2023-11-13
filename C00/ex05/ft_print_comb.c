#include "../../includes/aferron.h"

void ft_affichage(int a, int b, int c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    if(a != '7')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb()
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
                ft_affichage(a, b, c);
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
    ft_print_comb();
    return(0);
}
