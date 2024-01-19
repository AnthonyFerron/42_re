#include "../../../includes/aferron.h"

char *my_strupcase(char *str)
{
    int i;
    i = 0;

    while(str[i])
    {
        if(str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
        i++;
    }
    return(str);
}
/*
int main(int argc, char **argv)
{
    (void)argc;
    printf("%s", my_strupcase(argv[1]));
}
*/