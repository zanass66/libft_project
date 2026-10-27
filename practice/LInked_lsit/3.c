#include <stdlib.h>
#include <stdio.h>
void dynamic_example() {
    int *ptr = (int *)malloc(sizeof(int) * 2);
    if(!ptr)
        return ;
    *ptr = 42;
    ptr[1] = 10;
    ptr[2] = 50;
    int i = 0;
    while(i < 2)
    {
        printf("%d\t",ptr[i]);
        i++;
    }
    free(ptr); 
    // ptr is now a DANGLING POINTER! 
    // It still holds the address, but the memory belongs to the system.
}
int main(void)
{
  dynamic_example();
  return 0;
}