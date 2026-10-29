#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next; //self referential struct
};
int main(void)
{ 
    struct node *head;
    struct node *node1;
   
    head = malloc(sizeof(struct node));
    node1 = malloc(sizeof(struct node));
    head->value = 5;
    head->next = &node1;
    node1->value = 7;
    node1->next = NULL;
    struct node *current = head;
    while(current != NULL)
    {
        printf("%d ",current->value);
        current = current->next;// advance current to store the address of the next node
    }
    printf("| %d",head->value);
}
