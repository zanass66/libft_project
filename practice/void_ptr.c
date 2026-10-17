// concept of void pointer in c
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    void *ptr = &a;
    void *ptr = &b;
    printf("value of a: %d\n", *(int *)ptr);
    // ptr = &b;
    // printf("value of b: %c\n", *(char *)ptr);
    return 0;
}