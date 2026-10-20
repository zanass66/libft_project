/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_strjoin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:10:46 by zeanass           #+#    #+#             */
/*   Updated: 2026/10/19 15:32:15 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t s1_len  = ft_strlen(s1);
    size_t s2_len = ft_strlen(s2);
    if(!s1 || !s2)
        return NULL;
    size_t total = s1_len + s2_len;
    char *join_str = malloc(total + 1);
    if(!join_str)
        return NULL;
    int i = 0;
    while(i < s1_len)
    {
        join_str[i] = s1[i];
        i++;
    }
    int j = 0;
    while(j < s2_len)
    {
        join_str[i + j] = s2[j];
        j++;
    }
    join_str[i+j] = '\0';
    return (join_str);
}
int main(void)
{
    printf("%s\n",ft_strjoin("hello","anass"));
}
