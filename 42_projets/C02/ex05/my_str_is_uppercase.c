#include "../../../includes/aferron.h"

int my_str_is_uppercase(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if(!(str[i] >= 'A' && str[i] <= 'Z'))
            return(0);
        i++;
    }
    return(1);
}

/*
int main(int argc, char **argv)
{
    (void)argc;
    printf("%d", my_str_is_uppercase(argv[1]));
    return 0;
}
*/