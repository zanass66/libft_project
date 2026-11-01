// t_list *ft_lstlast(t_list *lst)
// {
//     t_list *current = lst;
//     if(!current)
//         return NULL;
//     while(current->next != NULL)
//         current = current->next;
//     return (current); 
// }
// int main(void)
// {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew("anass");
//     ft_lstadd_front(&head,node1);
//     t_list *node2 = ft_lstnew("med");
//     ft_lstadd_front(&head,node2);
//     t_list *node3 = ft_lstnew("yassmine");
//     ft_lstadd_front(&head,node3);

//     t_list *current = head;
//     while(current != NULL)
//     {
//         printf("%s\t",current->content);
//         current = current-> next;
//     }
//     t_list *last = ft_lstlast(head);
//     if(last)
//         printf("\nLast element: %s\n",last->content);
//     free(node1);
//     free(node2);
//     free(node3);
//     return 0;
// }
#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
    if(!lst)
        return (NULL);
    while(lst->next != NULL)
        lst = lst->next;
    return (lst);
}
int main(void)
{
    t_list *node1 = ft_lstnew("ANASS");
    t_list *node2 = ft_lstnew("YASSMIN"); 
    t_list *node3 = ft_lstnew("OUSSAMA");

    t_list *head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    t_list *last_node = ft_lstlast(head);
    printf("%s",(char*)last_node->content);
    return 0;
}