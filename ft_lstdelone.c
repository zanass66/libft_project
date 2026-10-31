#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// Custom delete function matching void (*del)(void *) pointer signature
void	del_content(void *content)
{
	printf("Deleting content payload: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*next_node;
	char	*str1;
	char	*str2;

	// 1. Allocate dynamic strings on the heap
	str1 = strdup("Heap String 1");
	str2 = strdup("Heap String 2");

	// 2. Create list nodes
	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);

	if (!node1 || !node2)
		return (1);

	// 3. Link node1 -> node2
	node1->next = node2;

	printf("--- BEFORE DELETION ---\n");
	printf("node1 content: %s\n", (char *)node1->content);
	printf("node2 content: %s\n\n", (char *)node2->content);

	// 4. Save reference to next node before freeing node1
	next_node = node1->next;

	// 5. Delete node1 (frees str1 and node1 structure)
	ft_lstdelone(node1, del_content);

	printf("\n--- AFTER DELETING NODE 1 ---\n");
	printf("node2 remains intact: %s\n\n", (char *)next_node->content);

	// 6. Clean up node2
	ft_lstdelone(node2, del_content);

	return (0);
}