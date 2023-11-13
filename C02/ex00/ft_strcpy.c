#include "../../includes/aferron.h"

char *ft_strcpy(char *src)
{
    int i;
    int size;
    char *dest;

    i = 0;
    size = ft_strlen(src);
    dest = malloc((size + 1) * sizeof(char));
    while(i < size)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

/*
int main(int argc, char **argv)
{
    (void)argc;
    char *final = ft_strcpy(argv[1]);
    ft_putstr(final);
}
*/