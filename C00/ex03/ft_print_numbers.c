#include "../../includes/aferron.h"

void ft_print_numbers(void)
{
    int i;
    int a;

    a = '0';
    i = 0;
    while(i < 10)
    {
        ft_putchar(a);
        a++;
        i++;
    }
}
/*
int main(void)
{
    ft_print_numbers();
}
*/