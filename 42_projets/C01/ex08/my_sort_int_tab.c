#include "../../../includes/aferron.h"

void my_sort_int_tab(int *tab, int size)
{
    int i;
    int t;

    i = 1;
    t = 0;
    size = my_intlen(tab);
    while(i < size)
    {
        if(tab[i] < tab[i - 1])
        {
            t = tab[i];
            tab[i] = tab[i - 1];
            tab[i - 1] = t;
            i = 1;
        }
        else
            i++;
    }

    i = 0;
    while(i < size)
    {
        my_putnbr(tab[i]);
        i++;
    }
}


// int main(void)
// {
//     int tab[7] = {4, 2, -5, 4, -7, 1};
//     my_sort_int_tab(tab, 0);
// }