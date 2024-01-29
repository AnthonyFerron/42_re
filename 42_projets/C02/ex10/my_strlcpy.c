#include "../../../includes/aferron.h"

unsigned int my_strlcpy(char *dest, char *src, unsigned int size)
{
    int i = 0;
    int j = 0;
    while(dest[i] != '\0' && i < size) {
        i++;
    }
    while(i < size && src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    // printf("%s\n", dest);
    return(i);
}

// int main(void) {
//     char dest[12] = "Hello ";
//     char *src = "World";
//     printf("%d", my_strlcpy(dest, src, 1));
 
//     return 0;
// }