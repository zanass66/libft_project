#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return ;
    if(!(*lst))
    {
        lst = new;
        return ;
    }
    t_list *temp = *lst;
    while(temp->next != NULL)
        temp = temp->next;
    temp->new = newNode;
}
int main(void)
{
    
}