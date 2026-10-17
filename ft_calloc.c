/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 19:56:59 by zeanass           #+#    #+#             */
/*   Updated: 2026/10/15 19:57:54 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//ft_calloc(5,4) --> allocate 5 items that are 4 bytes each .
static void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    if(size != 0 && (nmemb *size) / size != nmemb) //handle the overflow
        return NULL;
    ptr = malloc(nmemb * size);
    if(!ptr)
        return NULL;
    ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
int main(void)
{
   int *res = ft_calloc(5,0);
   int i = 0;
    while(i < 5)
    {
        res[i] = i + 1;
        i++;
    }
   i = 0;
   while(i < 5)
   {
        printf("%d\t",res[i]);
        i++;
   }
}