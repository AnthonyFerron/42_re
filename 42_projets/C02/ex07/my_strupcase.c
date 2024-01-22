#include "../../../includes/aferron.h"

char *my_strupcase(char *str)
{
    int i = 0;
    char *tab;
    tab = malloc((my_strlen(str) + 1) * sizeof(char));
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z') 
        {
            tab[i] = str[i] - 32;
        }
        else {
            tab[i] = str[i];
        }
        i++;
    }
    tab[i] = '\0';
    return tab;
}

// int main(void)
// {
//     printf("%s", my_strupcase("HelloWorld"));
//     return(0);
// }
