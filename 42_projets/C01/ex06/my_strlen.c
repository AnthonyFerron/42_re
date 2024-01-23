#include "../../../includes/aferron.h"

int my_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i - 1);
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
    printf("%d",my_strlen(argv[1]));
}
*/