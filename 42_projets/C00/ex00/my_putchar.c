#include "../../../includes/aferron.h"

void my_putchar(char c)
{
    write(1, &c, 1);
    return;
}

/*
int main(int argc, char **argv)
{
    (void)argc;
    my_putchar(argv[1][0]);
}
*/