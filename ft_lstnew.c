/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 13:59:18 by zeanass           #+#    #+#             */
/*   Updated: 2026/10/29 07:48:13 by zeanass          ###   ########.fr       */
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

/*int main(void)
{
	t_list *name = ft_lstnew("hello");
	printf("%s",name->content);
}*/
