#include "aferron.h"




int main(void)
{
    my_putchar('a');
    my_putchar('\n');
    my_putnbr(my_is_negative(5));
    my_putchar('\n');
    my_putnbr(42);
    my_putchar('\n');
    my_putstr("hello world");
    my_putchar('\n');
    my_putnbr(my_strlen("hello world"));
    my_putchar('\n');
    int tab[18] = {1, 2, 3, 4, 5};
    my_putnbr(my_intlen(tab));
    my_putchar('\n');
    my_putstr(my_strcpy("Hello World"));
    my_putchar('\n');
    my_putnbr(my_str_is_alpha("HelloWorldaAzZ"));
    my_putchar('\n');
    my_putnbr(my_str_is_numeric("0123456789"));
    my_putchar('\n');
    my_putnbr(my_str_is_lowercase("agvdujhszbdfkijn"));
    my_putchar('\n');
    my_putnbr(my_str_is_uppercase("TFCZDUGAOZ"));
    my_putchar('\n');
    my_putnbr(my_str_is_printable("ctracuvhsBIHZJBSDIJNnd .?QL/q, JHIAHSNOQND985623"));
    my_putstr("a\n");
    my_putstr(my_strupcase("HelloWorldaazz"));
    return(1);
}