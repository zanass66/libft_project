/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 19:56:59 by zeanass           #+#    #+#             */
/*   Updated: 2026/10/19 14:10:54 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft_calloc(5,4) --> allocate 5 items that are 4 bytes each .
#include "libft.h"
void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    if(size != 0 && size > (size_t)-1 / nmemb) //handle the overflow
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