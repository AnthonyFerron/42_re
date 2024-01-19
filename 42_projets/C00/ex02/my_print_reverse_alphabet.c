#include "../../../includes/aferron.h"

void my_print_reverse_alphabet(void)
{
    int i;
    int a;

    a = 'z';
    i = 0;
    while(i < 26)
    {
        my_putchar(a);
        a--;
        i++;
    }
}
/*
int main(void)
{
    my_print_reverse_alphabet();
}
*/