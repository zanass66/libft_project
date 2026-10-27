/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 13:59:18 by zeanass           #+#    #+#             */
/*   Updated: 2026/10/27 14:45:10 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
	t_list *node;
	
	node = (t_list*)malloc(sizeof(t_list));
	if(!node)
		return (NULL);
	node->content = content;
	node->next = (NULL);
	return (node);
}
int main(void)
{
	int num = 156234;
	t_list *int_node = ft_lstnew(&num);
	printf("%d",*(int*)int_node->content);
}
