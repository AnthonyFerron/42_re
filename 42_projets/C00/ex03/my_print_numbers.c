#include "../../../includes/aferron.h"

void my_print_numbers(void)
{
    int i;
    int a;

    a = '0';
    i = 0;
    while(i < 10)
    {
        my_putchar(a);
        a++;
        i++;
    }
}
/*
int main(void)
{
    my_print_numbers();
}
*/