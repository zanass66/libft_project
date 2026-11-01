#include "libft.h"
// void ft_lstadd_front(t_list **lst, t_list *new)
// {
//     if(!lst || !new)
//         return ;
//     new->next = *lst;// the new node will point to the head of the list
//     *lst = new; // the head will point to the new node
// }
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
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;
}
// int main(void)
// {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew("Anass");
//     t_list *node2 = ft_lstnew("Yassmin");
//     t_list *node3 = ft_lstnew("Med");
//     t_list *new_node_atFront = ft_lstnew("hamza");
    
//     ft_lstadd_front(&head,node1);
//     ft_lstadd_front(&head,node2);
//     ft_lstadd_front(&head,node3);
//     ft_lstadd_front(&head,new_node_atFront);

//     t_list *curr = head;
//     while(curr)
//     {
//         printf("%s\t",(char*)curr->content);
//         curr = curr->next;
//     } 
//     printf("NULL");

//     free(node1);
//     free(node2);
//     free(node3);
//     free(new_node_atFront);
//     return 0;
// }
