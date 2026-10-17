/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:48:22 by zeanass           #+#    #+#             */
/*   Updated: 2026/10/15 20:01:05 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
static size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while(s[i])
        i++;
    return i;
}
char *ft_strdup(const char *s)
{
    int s_len; 
    char *new_array;
    int i;
    s_len = ft_strlen(s);
    new_array = malloc(sizeof(char) * (s_len + 1));
    if(!new_array)
        return (NULL);
    i = 0;
    while(i < s_len)
    {
        new_array[i] = s[i];
        i++;
    }
    new_array[i] = '\0';
    return (new_array);
}
int main(void)
{
    char src[] = "hello";
    char *dup;
    dup = ft_strdup(src);
    if(dup)
    {
        printf("%s\n",dup);
        free(dup);
    }
    return 0;
}