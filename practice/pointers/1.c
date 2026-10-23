#include <stdio.h>
int main(void)
{
    int myNum = 10;
    int *ptr = &myNum;
    int **pptr = &ptr;
    printf("myNum = %d\n", myNum);
    printf("*ptr = %d\n", *ptr);
    printf("**pptr = %d\n", **pptr);
    return 0;
}