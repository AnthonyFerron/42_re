#include "../../includes/aferron.h"

void ft_putnbr(int nb)
{
    if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
    }
    if(nb < 10)
        ft_putchar(nb + '0');
}
/*
int main(int argc, char **argv)
{
    (void)argc;
    ft_putnbr(atoi(argv[1]));
}
*/