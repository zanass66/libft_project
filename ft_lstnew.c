
#include "libft.h"
// t_list *ft_lstnew(void *content)
// {
// 	t_list *node;
	
// 	node = (t_list*)malloc(sizeof(t_list));
// 	if(!node)
// 		return (NULL);
// 	node->content = content;
// 	node->next = (NULL);
// 	return (node);
// }

/*int main(void)
{
	t_list *name = ft_lstnew("hello");
	printf("%s",name->content);
}*/
t_list *ft_lstnew(void *content)
{
	t_list *head;
	head = (t_list*)malloc(sizeof(t_list));
	if(!head)
		return  NULL;
	head->content = content;
	head->next = NULL;
	return(head);
}
// int  main(void)
// {
// 	t_list *node1 = ft_lstnew("Anass");
// 	printf("%s",(char*)node1->next);
// }