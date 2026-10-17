#include <stdio.h>
#include <string.h>
char *ft_substr(char const *s, unsigned int start, size_t len);
// int main(void)
// {
//     char str[] = "Hello , Anass";
//     char ss[20];
//     strncpy(ss, str+7, 5);
//     ss[5] = '\0';
//     printf("%s", ss);
//     return 0;
// }
// void    getSub(char *str, char *ss, int pos, int len)
// {
//     int i = 0;
//     while(i < len)
//     {
//         ss[i] = str[pos + i];
//         i++;
//     }
//     ss[i] = '\0';
// }
// int main(void)
// {
//     char string[] = "Hello, Anass";
//     char ss[20];
//     getSub(string, ss, 7,5);
//     printf("%s", ss);
//     return 0;
// }
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i = 0;
    while(i < len)
    {
        str[i] = str[start + i];
        i++;
    }
    str[i] = '\0';
    return str[i];
}
