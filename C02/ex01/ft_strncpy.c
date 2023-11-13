#include "../../includes/aferron.h"

char *ft_strncpy(char *src, unsigned int n)
{
    unsigned int i;
    unsigned int size;
    char *dest;

    i = 0;
    size = ft_strlen(src);
    dest = malloc((size + 1) * sizeof(char));
    while(i < size && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}


int main(int argc, char **argv)
{
    (void)argc;
    char *final = ft_strncpy(argv[1], 3);
    ft_putstr(final);
    return(0);
}
