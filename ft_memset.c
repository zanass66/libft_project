/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 09:14:42 by zeanass           #+#    #+#             */
/*   Updated: 2026/11/04 23:14:48 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*int main(void)
{
	char buffer[10];
	ft_memset(buffer,'k',sizeof(buffer));
	size_t i = 0;
	while(i < sizeof(buffer))
	{
		printf("%c",buffer[i]);
		i++;
	}
	printf("\n");
	return 0;
}*/
int main(void)
{
	int x;
	int y;
	ft_memset(&x, 5, 2);
	ft_memset(&x, 57, 1);
	ft_memset(&y, 255, 4);
	ft_memset(&y, 255, 4);
	ft_memset(&y, 250, 2);
	ft_memset(&y, 199, 1);
	
	printf("%d\n%d", x, y);
	return (0);
}