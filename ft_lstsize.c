#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*int main(void)
{
    t_list *head;
    t_list *node1;
    t_list *node2;
    t_list *node3;
    t_list *current;

    head = NULL;

    node1 = ft_lstnew("anass");
    node2 = ft_lstnew("yassmine");
    node3 = ft_lstnew("med");

    ft_lstadd_front(&head,node1);
    ft_lstadd_front(&head,node2);
    ft_lstadd_front(&head,node3);

    current = head;
    while(current)
    {
        printf("%s\t",current->content);
        current = current->next;
    }
    printf("\n""%d\n",ft_lstsize(head));
    return 0;
}*/
