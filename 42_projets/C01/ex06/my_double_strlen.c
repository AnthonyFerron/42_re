#include "../../../includes/aferron.h"

int my_double_strlen(char **tab) {
    int i = 0;
    int j = 0;
    int k = 0;
    while(tab[i][0] != '\0') {
        while(tab[i][j] != '\0') {
            j++;
            k++;
        }
        j = 0;
        i++;
    }
    return(k);
}