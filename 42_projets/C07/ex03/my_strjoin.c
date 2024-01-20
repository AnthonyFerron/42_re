#include "../../../includes/aferron.h"

char *my_join(char **tab, char *link)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int lenght = my_strlen(link) + my_double_strlen(tab);
    char *str;
    str = malloc((my_strlen(tab, link) + 1) * sizeof(char));
    printf("%d", my_strlen(tab, link));
    while(tab[i][0] != '\0')
    {
        while(tab[i][j] != '\0')
        {
            str[k] = tab[i][j];
            k++;
            j++;
        }
        j = 0;
        if(tab[i + 1][0] != '\0')
        {
            while(link[j] != '\0')
            {
                str[k] = link[j];
                j++;
                k++;
            }
        }
        j = 0;
        i++;
    }
    return(str);
}



// int main(void)
// {
//     char *tab[] = {"Hello", "World", "Hello", "HI", ""};
//     char *str = my_join(tab, "_-_-_");
//     my_printf("%s\n", str);
//     free(str);
//     return 0;
// }