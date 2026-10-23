/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 09:34:52 by zeanass           #+#    #+#             */
/*   Updated: 2026/10/20 21:26:25 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dptr;
	const unsigned char	*sptr;

	if (!dest && !src)
		return (NULL);
	dptr = (unsigned char *)dest;
	sptr = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dptr[i] = sptr[i];
		i++;
	}
	return (dest);
}
int main()
{
    // expected result :  11235
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    memcpy(arr+2,arr,sizeof(int) * 8);
    int i = 0;
    while(i < 10)
    {
        printf("%d\t", arr[i]);
        i++;
    }
    printf("\n");
    memmove(arr+2,arr,sizeof(int) * 8);
    i = 0;
    while(i < 10)
    {
        printf("%d\t", arr[i]);
        i++;
    }
    //printf("%s\n",str);
    return 0;
}