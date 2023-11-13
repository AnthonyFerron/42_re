#include "../../includes/aferron.h"

void ft_print_combn(int n)
{
    int i;
    int a;
    i = 0;
    a = 0;
    
    if(n < 1 || n > 9)
    {
        ft_putstr("Veuillez rentrer un nombre entre 1 et 9 !");
        return;
    }
    while(i <= '9')
    {
        
    }
}

int main(int argc, char **argv)
{
    (void)argc;
    ft_print_combn(atoi(argv[1]));
}