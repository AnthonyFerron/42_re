#include "aferron.h"

int main(void)
{
    ft_putchar('a');
    ft_putchar('\n');
    ft_putnbr(ft_is_negative(5));
    ft_putchar('\n');
    ft_putnbr(42);
    ft_putchar('\n');
    ft_putstr("hello world");
    ft_putchar('\n');
    ft_putnbr(ft_strlen("hello world"));
    ft_putchar('\n');
    int tab[18] = {1, 2, 3, 4, 5};
    ft_putnbr(ft_intlen(tab));
    ft_putchar('\n');
    ft_putstr(ft_strcpy("Hello World"));
    ft_putchar('\n');
    ft_putnbr(ft_str_is_alpha("HelloWorldaAzZ"));
    ft_putchar('\n');
    ft_putnbr(ft_str_is_numeric("0123456789"));
    ft_putchar('\n');
    ft_putnbr(ft_str_is_lowercase("agvdujhszbdfkijn"));
    ft_putchar('\n');
    ft_putnbr(ft_str_is_uppercase("TFCZDUGAOZ"));
    ft_putchar('\n');
    ft_putnbr(ft_str_is_printable("ctracuvhsBIHZJBSDIJNnd .?QL/q, JHIAHSNOQND985623"));
    ft_putchar('\n');
    ft_putstr(ft_strupcase("HelloWorldaazz"));
}