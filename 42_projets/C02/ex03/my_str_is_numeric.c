#include "../../../includes/aferron.h"

int my_str_is_numeric(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if(!(str[i] >= '0' && str[i] <= '9'))
            return(0);
        i++;
    }
    return(1);
}

/*
int main(int argc, char **argv)
{
    (void)argc;
    printf("%d", my_str_is_numeric(argv[1]));
    return 0;
}
*/