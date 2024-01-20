#include "../../../includes/aferron.h"

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