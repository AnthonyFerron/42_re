#include "../../includes/aferron.h"

void ft_ultimate_div_mod(int *a, int *b)
{
    int c;

    c = *a;
    *a = *a / *b;
    *b = c % *b;
    printf("%d", *a);
    printf("%d", *b);
}
/*
int main(void)
{
    int *a;
    int *b;
    int d;
    int e;

    d = 26;
    e = 5;
    a = &d;
    b = &e;
    ft_ultimate_div_mod(a, b);

}
*/