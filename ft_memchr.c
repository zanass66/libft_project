/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:38:00 by zeanass           #+#    #+#             */
/*   Updated: 2026/11/04 22:00:13 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
    char *pos = ft_memchr(email,'@',ft_strlen(email));
    pos++;
    printf("%s\n",pos);
    return 0;
}