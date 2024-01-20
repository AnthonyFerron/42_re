#include "../../includes/aferron.h"

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
                // case 'p':
                    
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
    // int a = 5;
    // int *b = &a;
    my_printf("Example: %d %s %d\n", 42, "hello", 99);
    return(0);
}