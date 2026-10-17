#include <stdio.h>
char **ft_split(char const *s, char c);
char **split(char *string, char *seperators, int *count)
{
    int len = strlen(string);
    *count  = 0;
    int i = 0 ;
    while(i < len)
    {
        while(i < len)
        {
            if(strchr(seperators, string[i]) == NULL)
                break;
            i++;
        }
    }
}
