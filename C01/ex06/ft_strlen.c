#include "../../includes/aferron.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

/*
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("%s", "Veullez mettre un seul argument");
        return (0);
    }
    (void)argc;
    printf("%d",ft_strlen(argv[1]));
}
*/