#include "libft.h"

// 1. The Digit Counter
static int	get_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1; // 1 space needed for the '-' sign OR the digit '0' itself
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

//2. The Main Engine
char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n; // Cast to long immediately to protect against INT_MIN overflow
	len = get_len(nb);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0'; // Place the null terminator at the very end
	len--; // Step one index backward to start placing digits
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-'; // Place the minus sign at the absolute front
		nb = -nb;     // Make the number positive so we can extract digits
	}
	while (nb > 0)
	{
		str[len] = (nb % 10) + '0'; // Extract last digit, convert to char, and place
		len--;                      // Move left
		nb = nb / 10;               // Remove last digit from the number
	}
	return (str);
}
int main(void)
{
    printf("%s",ft_itoa(545512));
}