#include "../../../includes/aferron.h"


int my_intlen(long long int nbr)
{
    int i = 0;
    if(nbr < 0) {
        i++;
        nbr = -nbr;
    }
    if(nbr == 0) {
        return(1);
    }
    while(nbr > 0) {
        nbr = nbr/10;
        i++;
    }
    return(i);
}


// int main(void)
// {
//     printf("%d",my_intlen(0));
// }
