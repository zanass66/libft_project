#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int value;
    struct node *next;
};
// head a pointer store the memory address of the first node
// if(node == NULL)
struct Node *n = malloc(sizeof(struct Node));//malloc reserves one node on the heap and returns its address. n now points at it.
/*n
0x1000 (heap block)*/
if(n == NULL)
    return 1;
/*The check passes because n is not NULL, so the program goes on.
n
0x1000 (heap block)*/
n->value = 42;// the node hold the value of 42
n->next = NULL;//This node is the only one, so nothing follows it.
printf("%d\n", n->value);
free(n);
/*free gives the block back. 
n still holds the address, but that memory is no longer ours. */
n = NULL;
/*the pointer still holds the address after free, Setting n to NULL means no later 
code can use the freed block by accident.*/
int main(void)
{
    struct node a;
    a.value = 10; 
    a.next = &b;
    struct node b;
    b.value = 20;
    b.next = &c;
    struct node c;
    c.value = 30;
    c.next = NULL
} 
struct node *head;  head->value = 10; head->next = &b;
head = head->next; //now the head become node b 
struct node *b;  b->value = 20; b->next = &c;
head = head->next; // this mean that's the head point to the next node
struct node *c;  c->value = 30; c->next = &d;
struct node *d;  d->value = 40; d-next = NULL;
