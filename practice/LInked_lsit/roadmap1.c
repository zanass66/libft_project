/*Node *head = malloc(sizeof(Node));
head->value = 10;
head->next = NULL;
Node *second = malloc(sizeof(Node));
second->value = 20;
second->next = NULL;
head->next = second;
Node *third = malloc(sizeof(Node));
third->value = 30;
third->next = NULL;
second->next = third;
head->second->third->NULL.*/
typedef struct linkedlist
{
    int value;
    struct linkedlist *next;
}Node;
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    Node *a = malloc(sizeof(Node));
    Node *b = malloc(sizeof(Node));
    a->value = 10;
    b->value = 20;
    a->next = b;
    b->next = NULL;
    printf("%d\n",a->next->value);
    return 0;
}