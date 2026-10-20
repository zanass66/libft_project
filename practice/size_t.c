#include <stdio.h>
#include <string.h>
#include <stdint.h>
// size_t can store a big range of an integer can do !
// %zu : z --> A lenght modifier of type size_t
// %zu : u --> unisgned decimal integer

int main(void)
{
    char *str = "abcdef";
    size_t len = strlen(str);
    int i = 0;
    while(i < len)
    {
        printf("str[%d] = %c\n",i, str[i]);
        i++;
    }
    int _int = 2147483648;
    printf("_int: %d\n", _int);
    size_t _size_t = 2147483648;
    printf("_size_t: %zu\n", _size_t);
    printf("SIZE_MAX: %zu\n", SIZE_MAX);
    //printf("SIZE_MAX: %zu\n", SIZE_MIN);
}