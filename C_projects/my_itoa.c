#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *my_itoa(long long int nbr)
{
    int i = 0;
    int j = j;
    char *str;
    str = malloc(100 * sizeof(char));
    if(nbr == 0)
    {
        str[i] = '0';
        return(str);
    }
    if(nbr < 0)
    {
        str[i] = '-';
        i++;
    }
    while(nbr > 0)
    {
        j = nbr % 10;
        nbr = nbr / 10;
        if(nbr > 0)
            str[i] = my_itoa(nbr);
        i++;
        str[i] = '0' + j;
        i++;
    }
    return(str);
}

int main(void)
{
    printf("%s", my_itoa(123456789));
}