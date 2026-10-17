/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:18:40 by zeanass           #+#    #+#             */
/*   Updated: 2026/10/16 11:18:44 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
    size_t s1_len;
    size_t s2_len;
    size_t total_len;
    size_t i;
    size_t j;
    char *join_str;
    if(!s1 || !s2)
        return (NULL);
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    total_len = s1_len + s2_len;
    join_str = malloc (total_len + 1);
    if(!join_str)
        return (NULL);
    i = 0;
    while(i < s1_len)
    {
        join_str[i] = s1[i];
        i++;
    }
    j = 0;
    while(j < s2_len)
    {
        join_str[i+j] = s2[j];
        j++;
    }
    join_str[i + j] = '\0';
    return (join_str);
}

int main()
{
     // Exemple : str 1 = "Hello"
                //str 2 = "anass"
            // joining string "helloanass";
     printf("%s\n",ft_strjoin("hello", "anass"));
}