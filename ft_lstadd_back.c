#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}
int main(void)
{
    t_list *head = NULL;
    t_list *node1 = ft_lstnew("ANASS");
    t_list *node2 = ft_lstnew("yassmin");
    t_list *node3 = ft_lstnew("med");
    t_list *curr;

    head = NULL;
    //create node
    ft_lstadd_back(&head, node1);
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

    curr = head;
    while(curr)
    {
        printf("%s\t",(char *)curr->content);
        curr = curr->next;
    }
    printf("NULL\n");
    return (0);
}