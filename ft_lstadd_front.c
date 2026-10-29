#include "libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return ;
    new->next = *lst;// the new node will point to the head of the list
    *lst = new; // the head will point to the new node
}
//lst point to head 
// new : the new list we want to include
/*int  main(void)
{
    t_list *head = NULL;
    t_list *node1 = ft_lstnew("anass");
    ft_lstadd_front(&head,node1);

    t_list *node2 = ft_lstnew("med");
    ft_lstadd_front(&head,node2);
    t_list *current;
    
    current = head;
    while(current != NULL)
    {
        printf("%s\t",current->next);
        current = current->next;
    }
    return (0);
}*/
