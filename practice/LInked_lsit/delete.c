#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
// create a node
struct Node *createNode(int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    if(newNode == NULL)
    {
        printf("Memory allocation failed");
        exit(1);
    }
    newNode->data = value; //assign the integer value passed to the function into the data field of the newly created Node
    newNode->next = NULL; //assign the NULL value to the next pointer newly created node
    return (newNode);
}
// insertAtFront
struct Node *insertAtFront(struct Node *head, int value)
{
    struct Node *newNode = createNode(value);
    newNode->next = head;//point to the current head
    return newNode; //the new head is the new Node
}
//Deletes the first node with this value, and return the head
struct Node *deleteValue(struct Node *head, int value)
{
    if(head == NULL)
        return NULL;
    // Special case: delete the first node
    if(head->data = value)
    {
        struct Node *newNode = head->next;
        free(head);
        return newHead;
    }
    // Find the node before the one to delete
    struct Node *current = head;
    while(current->next != NULL && current->next->data != value)
        current = current->next;
}