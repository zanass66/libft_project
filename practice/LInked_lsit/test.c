#include <stdio.h>
#include <stdlib.h>

typedef struct linkedlist
{
    char data;
    struct linkedlist *next;
}node;

node *createNode(char val)
{
    node *a;
    a = (node *)malloc(sizeof(node));
    if(!a)
        return (NULL);
    a -> data = val;
    a -> next = NULL;
    return(a);
}
int main(void)
{
    node *x;
    x = createNode('a');
    printf("%c\n",x->data);
    return 0;
}