#include "../../../includes/aferron.h"

void my_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        my_putchar(str[i]);
        i++;
    }
    return;
}


// int main(void)
// {
//     my_putstr("");
// }
