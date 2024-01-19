#include "../../../includes/aferron.h"

void my_putnbr(int nb)
{
    if(nb < 0)
    {
        my_putchar('-');
        nb = -nb;
    }
    if(nb > 9)
    {
        my_putnbr(nb / 10);
        my_putchar((nb % 10) + '0');
    }
    if(nb < 10)
        my_putchar(nb + '0');
}
/*
int main(int argc, char **argv)
{
    (void)argc;
    my_putnbr(atoi(argv[1]));
}
*/