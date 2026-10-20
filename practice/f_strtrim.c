#include <unistd.h>
char	*ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t len;

    if(!s1 || !set)
        return NULL;
    start = 0;
    while(s1[start] && ft_strchr(start,set[start]) != NULL)
        start++;
    if(s1[start] == '\0')
        ft_substr(s1,0,0);
    end = ft_strlen(s1) - 1;
    while(s1[end] && ft_strchr(end, set[end]) != NULL)
        end--;
    len = (end - start) + 1;
    return(ft_substr(s1,start,len));
}
int main(void)
{
    char s1[] = "helloh";
    char *set = "h"
    ft_strtrim(s1,set,);
}