/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 13:59:18 by zeanass           #+#    #+#             */
/*   Updated: 2026/10/24 14:08:54 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//allocate  memory, for a new node .
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

int main(void)
{
    t_list *node;
	char *str_content = "Hello Anass";
	node = ft_lstnew(str_content);
    //printf("%s\n",(char*)node->next);
	printf("%s\n",(char*)node->content);
    return 0;
}