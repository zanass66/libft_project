#include <stdio.h>
// void ptr
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
    i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
int main(void)
{
    char buffer[20];
    ft_memset(buffer,'b',5);
    int i;
    i = 0;
    while(i < 10)
    {
        printf("%c",buffer[i]);
        i++;
    }
    printf("\n");
}