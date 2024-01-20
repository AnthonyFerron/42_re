#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

void my_putchar(char c) {
    write(1, &c, 1);
    return;
}

void my_putstr(char *str) {
    int i = 0;
    while(str[i]) {
        my_putchar(str[i]);
        i++;
    }
    return;
}

void my_putnbr(long long int nbr) {
    long long int i = 0;
    if(nbr == 0) {
        my_putchar('0');
        return;
    }
    if(nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    if(nbr > 0) {
        i = nbr % 10;
        nbr = nbr / 10;
        if(nbr > 0)
            my_putnbr(nbr);
        my_putchar('0' + i);
    }
    return;
}

void my_put_unsigned_nbr(unsigned long long int nbr) {
    unsigned long long int i = 0;
    if(nbr == 0) {
        my_putchar('0');
        return;
    }
    if(nbr > 0) {
        i = nbr % 10;
        nbr = nbr / 10;
        if(nbr > 0)
            my_put_unsigned_nbr(nbr);
        my_putchar('0' + i);
    }
    return;
}

void my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    while(*format != '\0') {
        if(*format == '%') {
            format++;
            switch(*format) {
                case 'd':
                    my_putnbr(va_arg(args, int));
                    break;
                case 'c':
                    my_putchar(va_arg(args, int));
                    break;
                case 's':
                    my_putstr(va_arg(args, char *));
                    break;
                case 'u':
                    my_put_unsigned_nbr(va_arg(args, unsigned long long int));
                    break;
                case 'p':
                    
            }
        } else {
            my_putchar(*format);
        }
        format++;
    }
    va_end(args);
}

int main(void) {
    my_printf("%d\n", -123456789);
    my_printf("%c\n", 'c');
    my_printf("%s\n", "Hello World");
    my_printf("%u\n", 2997924580000000005);
    int a = 5;
    int *b = &a;
    my_printf("Example: %d %s %d\n", 42, "hello", 99);
    return(0);
}