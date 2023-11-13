#include "../../includes/aferron.h"

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;

    return;
}
/*
int main(void)
{
	int nb = 50;
	int n = 49;
	int *div = &nb;
	int *mod = &n;
	ft_div_mod(nb,n,div, mod);
	printf("%d",*div);
	printf("%c",' ');
	printf("%d",*mod);
}
*/