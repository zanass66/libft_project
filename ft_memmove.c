/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:17:27 by zeanass           #+#    #+#             */
/*   Updated: 2026/10/18 19:38:19 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	// it copies from the end to the beginning (right to left)
	if (d > s)
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	else // d < s : it copies from the beginning to the end (left to right)
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	return (dest);
}
int main(void)
{
	int arr_s[] = {1,2,3,4,5,6,7};
	int dest[20];
	ft_memmove(dest,arr_s,sizeof(int) * 7);
	int i = 0;
	while(i < 7)
	{
		printf("%d\t",arr_s[i]);
		i++;
	}
	printf("\n");
}
