/*copy a block of memory from one location to another*/
// void *memmove(void *dest, const void *src, size_t n)
//preform a copy from src to dest

#include <stdio.h>
#include <string.h>

int main()
{
    int source[10] = {1,2,3,4,5,6,7,8,9,10};
    int destinaton[10];
    // pass the memory address of src and dest
    memmove(destinaton,source,sizeof(int) * 10);
    int i;
    i = 0;
    while(i < 10)
    {
        printf("%d\t",destinaton[i]);
        i++;
    }
    return 0;
}