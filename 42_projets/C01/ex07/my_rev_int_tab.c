#include "../../../includes/aferron.h"

void my_rev_int_tab(int *tab, int size)
{
    int i;

    i = 0;
    size = my_intlen(tab);
    int tabl[size + 1];
    while (i < size)
    {
        tabl[i] = tab[size - i - 1];
        i++;
    }
    i = 0;
    while(i < size)
    {
        my_putnbr(tabl[i]);
        i++;
    }
}


// int main(void)
// {
//     int tab[6] = {1, 2, 3, 4, 5};
//     my_rev_int_tab(tab, 0);
// }