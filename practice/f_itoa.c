#include <stdio.h>
#include <stdlib.h>
int number_len(long nbr)
{
	int len = 0;
	if(nbr <= 0)
		len = 1;
	while(nbr != 0)
	{
		len++;
		nbr = nbr / 10; //123 -> 12
	}
	return (len);
}
char	*ft_itoa(int n)
{
	int len = number_len(n);
	char *str = malloc (len + 1);
	if(!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if(n == 0)
		str[0] = '0';

	if(n < 0)
	{
		str[0] = '-';
		n = -n; // make it a positive number
	}
	while(n > 0)
	{
		str[len] = (n % 10) + '0';
		len--;
		n = n / 10;
	}
	return (str);
}
int main(void)
{
	//printf("%d\n",number_len(123));
    printf("%s",ft_itoa(545512));
}