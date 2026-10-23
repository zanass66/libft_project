#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int value)
{
   struct Node *newNode = malloc(sizeof(struct Node));
   if(newNode == NULL)
   {
        printf("Memory allocation failed\n"); 
        exit(1);
   } 
   newNode -> data = value; // Stores the integer value passed into the function into the data field of the newly created node.
   newNode -> next = NULL;  //intialize the next pointer of the new node to NULL
   return newNode;
}
// Adds a node at the front, and returns the new head
struct Node *insertAtFront(struct Node *head, int value) {
  struct Node *newNode = createNode(value);
  newNode->next = head; // Step 1: point to the current head
  return newNode;       // Step 2: the new node is the new head
}
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
void    freeList(struct Node *head)
{
    while(head != NULL)
    {
        struct Node *next = head -> next; // remember the next node
        free(head); // free the current node 
        head = next; //move on the next node
    }
}
int main(void)
{
    struct Node *head = NULL; //the list is empty, so head is NULL
    head = insertAtFront(head, 30);
    printList(head);

    head = insertAtFront(head, 40);
    printList(head);

    head = insertAtFront(head, 50);
    printList(head);

    return 0;
}


