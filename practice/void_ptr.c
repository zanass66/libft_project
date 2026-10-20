// concept of void pointer in c
#include <stdio.h>
int main(void)
{
    void *p;
    int *ip;
    
    printf("%zu\n",sizeof(p)); //8 byte
    printf("%zu\n",sizeof(ip));// 8 byte
}