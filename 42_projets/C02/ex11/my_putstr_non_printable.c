#include "../../../includes/aferron.h"


void my_putnbr_base(int nbr, char *base) {
    int base_len = my_strlen(base);
    if(nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    if(nbr >= base_len) {
        my_putnbr_base(nbr / base_len, base);
    }
    my_putchar(base[nbr % base_len]);
}

void my_putstr_non_printable(char *str){

    int i = 0;
    while(str[i] != '\0') {
        if(str[i] < 32 || str[i] > 126) {
            my_putchar('\\');
            my_putnbr_base(str[i], "0123456789abcdef");
        } else {
            my_putchar(str[i]);
        }
        i++;
    }


}






int main(void) {
    char *str = "Coucou\ntu vas bien ?";
    my_putstr_non_printable(str);
    return 0;
}