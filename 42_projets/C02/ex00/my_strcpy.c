#include "../../../includes/aferron.h"

char *my_strcpy(char *src)
{
    int i;
    int size;
    char *dest;

    i = 0;
    size = my_strlen(src);
    dest = malloc((size + 1) * sizeof(char));
    while(i <= size)
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
    char *final = my_strcpy(argv[1]);
    my_putstr(final);
}
*/