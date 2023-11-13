#include "../../includes/aferron.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
int main(int argc, char **argv)
{
    (void)argc;
    ft_putchar(argv[1][0]);
}
*/