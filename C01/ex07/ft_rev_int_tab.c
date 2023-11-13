#include "../../includes/aferron.h"

void ft_rev_int_tab(int *tab, int size)
{
    int i;

    i = 0;
    size = ft_intlen(tab);
    int tabl[size + 1];
    while (i < size)
    {
        tabl[i] = tab[size - i - 1];
        i++;
    }
    i = 0;
    while(i < size)
    {
        ft_putnbr(tabl[i]);
        i++;
    }
}

int main(void)
{
    int tab[6] = {1, 2, 3, 4, 5};
    ft_rev_int_tab(tab, 0);
}