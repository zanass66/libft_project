#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]); // Modifies s[i] directly in-place
		i++;
	}
}
// 1. Callback matching: void (*f)(unsigned int, char*)
// Modifies the character in-place using the pointer *c
void	capitalize_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && (*c >= 'a' && *c <= 'z'))
		*c = *c - 32;
}

int	main(void)
{
	// MUST use char str[] array syntax (mutable memory).
	// Do NOT use char *str = "..." (string literal in read-only memory).
	char	str[] = "hello 42 world!";

	printf("Before: %s\n", str);
	ft_striteri(str, capitalize_even);
	printf("After : %s\n", str);
	return (0);
}