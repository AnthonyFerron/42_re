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
    my_putnbr(my_intlen(1234567891));
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
    my_putstr("\n");
    my_putstr(my_itoa(-123456789));
    my_putstr("\n");
    my_putnbr(my_atoi("123456789"));
    my_putstr("\n");
    my_printf("%d", -42);
    my_putstr("\n");
    my_printf("%c", 'a');
    my_putstr("\n");
    my_printf("%s", "HelloWorld");
    my_putstr("\n");
    my_printf("%u", 42);
    my_putstr("\n");
    int a = 42;
    int *ptr = &a;
    my_printf("%p\n", ptr);

    char *tab[] = {"Hello", "World", "Hello", "HI", ""};
    my_printf("%s\n", my_strjoin(tab, "_-_-_"));
    my_putstr("\n");
    my_printf("%s", my_strcapitalize("hello biatch"));
    return(1);
}