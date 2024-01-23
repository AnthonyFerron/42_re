#include "../../includes/aferron.h"

char* my_print_pointeur(int *ptr) {
    const char prefixe[] = "0x";
    const int sizeHex = sizeof(void *) * 2;
    int zeroPadding = 1;
    char* str = (char*)malloc(sizeof(prefixe) + sizeHex + 1);
    if (str == NULL) {
        perror("Allocation mémoire échouée");
        exit(EXIT_FAILURE);
    }
    strcpy(str, prefixe);
    char *temp = str + sizeof(prefixe) - 1;
    for (int i = sizeHex - 1; i >= 0; i--) {
        int shift = i * 4;
        int digit = ((unsigned long)ptr >> shift) & 0xF;
        if (digit != 0 || !zeroPadding) {
            zeroPadding = 0;
            *temp++ = (digit < 10) ? digit + '0' : digit - 10 + 'a';
        }
    }
    *temp = '\0';
    return str;
}

// int main(void) {
//     int x = 42;
//     int *ptr = &x;
//     char *str = my_print_pointeur(ptr);
//     printf("%s\n", str);
//     free(str);
//     return 0;
// }