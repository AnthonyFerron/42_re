#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_strlen(char *str) {
    int i = 0;
    while(str[i] != '\0')
        i++;
    return(i - 1);
}


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
        nbr = -nbr;
        i++;
    }
    while(nbr > 0)
    {
        j = nbr % 10;
        nbr = nbr / 10;
        str[i] = '0' + j;
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
    return(str);
}



int main(void)
{
    printf("%s", my_itoa(-123456789));
}