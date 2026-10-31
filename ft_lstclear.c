#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// Custom delete function to free heap-allocated content
void	del_content(void *content)
{
	printf("Deleting node content: %s\n", (char *)content);
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

	// 1. Create nodes with heap-allocated strings (strdup)
	node1 = ft_lstnew(strdup("Node 1: Start"));
	node2 = ft_lstnew(strdup("Node 2: Middle"));
	node3 = ft_lstnew(strdup("Node 3: End"));

	if (!node1 || !node2 || !node3)
		return (1);

	// 2. Chain nodes using ft_lstadd_back
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	printf("--- BEFORE CLEARING --- \n");
	curr = head;
	while (curr)
	{
		printf("List item: %s\n", (char *)curr->content);
		curr = curr->next;
	}
	printf("\n--- CLEARING ENTIRE LIST ---\n");

	// 3. Clear the entire list starting from head
	ft_lstclear(&head, del_content);

	// 4. Verify head pointer state
	printf("\n--- AFTER CLEARING ---\n");
	if (head == NULL)
		printf("SUCCESS: head pointer is now NULL!\n");
	else
		printf("ERROR: head pointer was not cleared.\n");

	return (0);
}