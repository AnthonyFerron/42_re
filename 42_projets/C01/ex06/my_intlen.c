#include "../../../includes/aferron.h"

int my_intlen(int *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

/*
int main(void)
{
    int tab[18] = {1, 2, 3, 4, 5};
    printf("%d",my_intlen(tab));
}
*/