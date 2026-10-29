/*I must review the following function
   -> AddBeforFirst                    
   -> AddAfterSecond
   -> the continue 
   */
#include <stdio.h>
#include <stdlib.h>
typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
}node;

node *a;
node *first;
node *second;
node *p;
//--------create a node--------//
void createfirst(int val)
{
    a = (node*)malloc(sizeof(node));
    a->data = val; //Follow the pointer (a) to the allocated node structure, access its data member, and store val inside it.
    a->next = (NULL);// pointer that doesn't point to anything .
} 
//------add a node ----------//
void addnode(int val)
{
    /*A cursor pointer is simply a temporary variable used to traverse a linked
     list without losing the head reference. As you move through the nodes, the 
     cursor is updated to point to the next element, such as `first = first->next`. 
     This allows your code to inspect or modify list data sequentially.*/
    
     first = a;//copies the memory address stored in head pointer a into first
    //same pointers point to the same stating node.
    while(first->next != NULL)
    {
        first = first->next; //first will point to the next node
    }
    second = (node*)malloc(sizeof(node));//tha address of node it will store on second
    second->data = val; 
    second->next = (NULL);
    first->next = second; 
}
//--------add befor first node----------------//
void    AddBeforFirst(int val)
{
    first = (node *)malloc(sizeof(node));//address of new node stored on first
    first->data = val;
    first-> next = a;
    a = first; //first store the add of new node it will be asiign to a
}
//--------add before second node--------------//
void    AddAfterSecond(int val)
{
    first = a;// first will hold the address of a
    while(first->data != val)
    {
        first = first -> next;
    }
    second = (node*)malloc(sizeof(node));
    if(!second)
        return NULL;
    p = first->next;
    first->next = second;
    second->next = p;
}
//--------display a nodes and their sum-------//
void display()
{
    first = a;
    int sum = 0;
    while(first != NULL)
    {
        printf("->%d",first->data);
        sum += first->data;
        first = first->next;// the next node address stored in first
    }
    printf("\n Sum of All Nodes is: %d\n",sum);
}

//--------int main---------//
int main(void)
{
    createfirst(10);
    addnode(20);
    addnode(30);
    addnode(40); 
    AddBeforFirst(50);
    display();
    return 0;
}
