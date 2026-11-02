#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if(!lst || !f)
		return;
	while(lst != NULL)
	{
		f(ls->content);
		lst = lst->next;
	}
}


// Example function to apply to each node's content: converts lowercase string to uppercase
void to_upercase(void *content)
{
	if(!content)
		return;
	char *str = (char *)content;
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}
// Cleanup helper function
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*curr;

	head = NULL;

	// 1. Create nodes with heap-allocated writable strings
	node1 = ft_lstnew(ft_strdup("hello"));
	node2 = ft_lstnew(ft_strdup("world"));
	node3 = ft_lstnew(ft_strdup("1337 rabat"));

	if (!node1 || !node2 || !node3)
		return (1);

	// 2. Chain nodes
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	printf("--- BEFORE FT_LSTITER ---\n");
	curr = head;
	while (curr)
	{
		printf("Node content: %s\n", (char *)curr->content);
		curr = curr->next;
	}

	// 3. Apply to_uppercase to every node's content
	ft_lstiter(head, to_uppercase);

	printf("\n--- AFTER FT_LSTITER (TO UPPERCASE) ---\n");
	curr = head;
	while (curr)
	{
		printf("Node content: %s\n", (char *)curr->content);
		curr = curr->next;
	}

	// 4. Free all allocated memory
	ft_lstclear(&head, del_content);

	return (0);
}