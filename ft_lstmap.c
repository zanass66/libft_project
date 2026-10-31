#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// Transformation function: Allocates a new string with uppercase letters
void	*duplicate_and_uppercase(void *content)
{
	char	*str;
	char	*new_str;
	int		i;

	if (!content)
		return (NULL);
	str = (char *)content;
	new_str = strdup(str);
	if (!new_str)
		return (NULL);
	i = 0;
	while (new_str[i])
	{
		if (new_str[i] >= 'a' && new_str[i] <= 'z')
			new_str[i] -= 32;
		i++;
	}
	return ((void *)new_str);
}

// Cleanup function for ft_lstclear
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*orig_list;
	t_list	*mapped_list;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*curr;

	orig_list = NULL;

	// 1. Create original list
	n1 = ft_lstnew(strdup("original item 1"));
	n2 = ft_lstnew(strdup("original item 2"));
	n3 = ft_lstnew(strdup("original item 3"));

	if (!n1 || !n2 || !n3)
		return (1);

	ft_lstadd_back(&orig_list, n1);
	ft_lstadd_back(&orig_list, n2);
	ft_lstadd_back(&orig_list, n3);

	// 2. Map original list to a new list
	mapped_list = ft_lstmap(orig_list, duplicate_and_uppercase, del_content);

	// 3. Print original list (unchanged)
	printf("--- ORIGINAL LIST ---\n");
	curr = orig_list;
	while (curr)
	{
		printf("%s\n", (char *)curr->content);
		curr = curr->next;
	}

	// 4. Print mapped list (transformed)
	printf("\n--- MAPPED NEW LIST ---\n");
	curr = mapped_list;
	while (curr)
	{
		printf("%s\n", (char *)curr->content);
		curr = curr->next;
	}

	// 5. Clean up both independent lists
	ft_lstclear(&orig_list, del_content);
	ft_lstclear(&mapped_list, del_content);

	return (0);
}