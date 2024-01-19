#include "../../../includes/aferron.h"

int my_str_is_printable(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if(!(str[i] >= 32 && str[i] <= 126))
            return(0);
        i++;
    }
    return(1);
}

/*
int main(int argc, char **argv)
{
    (void)argc;
    printf("%d", my_str_is_printable(argv[1]));
    return 0;
}
*/