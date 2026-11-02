#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if(!lst || !del)
		return  ;
	del(lst->content);
	free(lst);
}
// Custom delete function matching void (*del)(void *) pointer signature
void	delet_content(void *content){free(content);}

int	main(void)
{
	
	t_list *node1 = ft_lstnew(ft_strdup("yassmin"));
	t_list *node2 = ft_lstnew(ft_strdup("ANASS"));
	node1->next = node2;
	ft_lstdelone(node1,delet_content);
	ft_lstdelone(node2, delet_content);
	
	return (0);
}