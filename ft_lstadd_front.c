#include "libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return;
    new -> next = *lst;
    *lst = new;
}
int  main(void)
{
    t_list *head = NULL;//represent an empty list
    t_list *node1;
    t_list *node2;
    t_list *curr;
    //create first Node and add it to front
    node1 = ft_lstnew("first Node");
    if(!node1)
        return(1);
    ft_lstadd_front(&head,node1);
    //create second Node and add it to front
    if(!node2)
    {
        free(node1);
        return (1);
    }
    ft_lstadd_front(&head, node2);
    printf("%p\n",head);
    printf("%p\n",&head);
    curr =  head;
    while(curr)
    {
        printf("Node Address : %p\n", (void *)curr);
		printf("Content      : %s\n", (char *)curr->content);
		printf("Next Pointer : %p\n", (void *)curr->next);
		printf("--------------------------------------------------\n");
		curr = curr->next;
    }
    return 0;
}