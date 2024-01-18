#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char **tab, char *link)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while(tab[i][0] != '\0')
    {
        while(tab[i][j] != '\0')
        {
            j++;
            k++;
        }
        j = 0;
        i++;
    }
    j = 0;
    while(link[j] != '\0')
        j++;
    j = j * (i - 1);
    k = k + j;
    return(k);
}

char *ft_join(char **tab, char *link)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *str;
    str = malloc((ft_strlen(tab, link) + 1) * sizeof(char));
    printf("%d", ft_strlen(tab, link));
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

int main(void)
{
    char *tab[] = {"Hello", "World", "Hello", "HI", ""}; // Added a null terminator at the end
    char *str = ft_join(tab, "_-_-_");
    printf("%s\n", str);
    free(str);
    return 0;
}