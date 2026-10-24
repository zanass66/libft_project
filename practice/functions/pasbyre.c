#include <stdio.h>
void    addTen(int *x)
{
    *x = *x + 10;
}
int main(void)
{
    int myNum = 5;
    addTen(&myNum);
    printf("%d\n",myNum);
    return 0;
}