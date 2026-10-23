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

// int main(void)
// {
//     t_list *node = ft_lstnew("anass");
//     printf("%s",(char*)node->next);
//     return 0;
// }