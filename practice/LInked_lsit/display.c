#include <stdio.h>
struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    //create 3 nodes
    struct Node a, b, c;
    a.data = 10;
    b.data = 20;
    c.data = 30;
    // link them together
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    //walk through the list then print them
    struct Node *current = &a;
    while(current != NULL)
    {
        printf("%d -> ", current -> data);
        current = current -> next;
    }
    printf("NULL\n");
    return 0;
}