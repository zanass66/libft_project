#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char    *res;
    
    res = malloc(ft_strlen(s) + 1);
    if(!res)
        return (NULL);
    i = 0;
    while(i < ft_strlen(s))
    {
        res[i] = (*f)(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}

char	uppercase(unsigned int i, char c)
{
	if (i % 2 == 0 && (c >= 'a' && c <= 'z'))
		return (c - 32);
	return (c);
}

int	main(void)
{
	char	*str = "hello 42 world!";
	char	*res;

	res = ft_strmapi(str, uppercase);	
	printf("Result   : %s\n", res);

	return (0);
}
