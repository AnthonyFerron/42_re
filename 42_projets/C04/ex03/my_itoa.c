#include "../../../includes/aferron.h"

char *my_itoa(int nbr)
{
    int i = 0;
    int j = 0;
    char *str;
    str = malloc((my_intlen(nbr) + 1) * sizeof(char));
    if(nbr == 0)
    {
        str[i] = '0';
        return(str);
    }
    if(nbr < 0)
    {
        str[i] = '-';
        nbr = -nbr;
        i++;
    }
    while(nbr > 0)
    {
        j = nbr % 10;
        nbr = nbr / 10;
        str[i] = j + '0';
        i++;
    }
    int start = 0;
    if(str[0] == '-')
        start = 1;
    int end = my_strlen(str);
    char temp;
    while(start < end)
    {
        temp = str[end];
        str[end] = str[start];
        str[start] = temp;
        start++;
        end--;
    }
    str[i] = '\0';
    return(str);
}



// int main(void)
// {
//     printf("%s\n", my_itoa(-123456789));
// }