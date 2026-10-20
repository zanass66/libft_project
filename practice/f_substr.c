
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char *ft_substr(char const *str, unsigned int index, size_t len)
{
    size_t str_len = strlen(str);
    size_t i;
    char *substr;
    if(!str)
        return NULL;
    if(index >= str_len)
        len = 0;
    else if(len > (str_len - index))
        len = (str_len - index);
    substr = malloc(1 * len);
    if(!substr)
        return NULL;
    i = 0;
    while(i < len)
    {
        substr[i] = str[index + i];
        i++;
    }
    substr[i] = '\0';
    return substr;
}
int main(void)
{
    char string[] = "anass.zeroual@etu.uae.ac.ma"; // len 27 - 14
    char *substr = ft_substr(string,13,14);
    int i = 0;
    while(i < 13)
    {
        printf("%c",substr[i]);
        i++;
    }
    printf("\n");
}