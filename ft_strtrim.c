/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:51:45 by zeanass           #+#    #+#             */
/*   Updated: 2026/10/17 10:52:54 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

static char *ft_substr(char const *s, unsigned int start, size_t len)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	if (s1[start] == '\0')
		return (ft_substr(s1, 0, 0)); 
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	len = end - start + 1;
	return (ft_substr(s1, start, len));
}

int main(void)
{
	char *str = "zesezsehello am anasszezezez";
	char *set = "zes";
	char *result = ft_strtrim(str,set);
	printf("%s\n", result);
}
