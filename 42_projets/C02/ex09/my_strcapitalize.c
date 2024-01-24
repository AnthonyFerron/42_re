#include "../../../includes/aferron.h"


char *my_strcapitalize(char *str)
{
    int i = 0;
    char *string;
    string = malloc((my_strlen(str) + 1) * sizeof(char));
    while(str[i]) {
            if((str[i] >= 'a' && str[i] <= 'z') || i == 0) {
                if(i == 0)
                    string[i] = str[i] -32;
                else if((str[i - 1] >= ' ' && str[i - 1] <= '?' ) && !(str[i - 1] >= '0' && str[i - 1] <= '9'))
                    string[i] = str[i] - 32;
                else
                    string[i] = str[i];
                
                
            }
            else
                string[i] = str[i];
            i++;
    }
    string[i] = '\0';
    return(string);
}


// int main(void)
// {
//     my_printf("%s", my_strcapitalize("hello world, biatch 42ssd dix-sept+six"));
//     return 0;
// }