#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_ptr;
	size_t			i;

	s_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_ptr[i] == (unsigned char)c)
			return ((void *)&s_ptr[i]);
		i++;
	}
	return (NULL);
}
int main(void)
{
    char email[] = "anass.zeroual@etu.uae.ac.ma";
    char *pos = ft_memchr(email,'@',strlen(email));
    pos++;
    printf("%s\n",pos);
    return 0;
}