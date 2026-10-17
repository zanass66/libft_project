/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:04:57 by zeanass           #+#    #+#             */
/*   Updated: 2026/10/14 13:05:13 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_toupper(int c)
{
    //convert lowercase alphabet to uppercase
    if(c >= 'a' && c <= 'z')
        return (c - 32);
    return c;
}
int main(void)
{
    printf("%c",ft_toupper('h'));
}