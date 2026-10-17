/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:21:05 by zeanass           #+#    #+#             */
/*   Updated: 2026/10/17 09:55:33 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ss;
    size_t i;
    size_t s_len;
    if(!s)
        return (NULL);
    
    s_len = ft_strlen(s);
    if(start >= s_len)
        len = 0;
    else if(len > s_len - start)
        len = s_len - start;
    ss = malloc(sizeof(char) * (len + 1));
    if(!ss)
        return (NULL);
    i = 0;
    while(i < len)
    {
        ss[i] = s[start + i];
        i++;
    }
    ss[i] = '\0';
    return (ss);
}
int main(void)
{
    char str[] = "anass.zeroual@uit.uae.ac.ma";
    char *ss = ft_substr(str,13,14);
    int i = 0;
    while(i < strlen(str))
    {
        printf("%c",ss[i]);
        i++;
    }
    printf("\n");
    return 0;
}
