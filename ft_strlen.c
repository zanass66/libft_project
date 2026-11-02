/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:35:54 by zeanass           #+#    #+#             */
/*   Updated: 2026/11/02 17:08:02 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
int main(void)
{
    char arr[] = "hELLO";
    size_t len = ft_strlen(arr);
    size_t memory = sizeof(arr); //+ len of '\0'
    printf("Lenght: %zu\n",len);
    printf("Memory: %zu bytes\n",memory);
    return (0);
}