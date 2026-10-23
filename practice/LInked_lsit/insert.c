#include <stdio.h>
struct Node
{
    int data;
    struct Node *next;
};
void printList(struct Node *head)
{
    struct Node *current = head;
    while(current != NULL)
    {
        printf("%d -> ",current -> data); // read the value that's current point to
        current = current -> next; //move to the next node
    }
    printf("NULL\n");
}
int main(void)
{
    struct Node a, b, c;
    a.data = 10;
    b.data = 20;
    c.data = 30;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    printList(&a);

    struct Node d;
    d.data = 15;
    d.next = &b;
    a.next = &d;
    printList(&a);

    struct Node f;
    f.data = 5;
    f.next = &a;
    printList(&f);
    
    return 0;


}