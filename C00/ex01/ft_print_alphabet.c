#include "../../includes/aferron.h"

void ft_print_alphabet(void)
{
    int i;
    int a;

    a = 'a';
    i = 0;
    while(i < 26)
    {
        ft_putchar(a);
        a++;
        i++;
    }
}
/*
int main(void)
{
    ft_print_alphabet();
}
*/