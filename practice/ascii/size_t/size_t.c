//size_t is unsigned integer in the lib <stddef.h>
//---> It represents the size of any object in bytes.
//unsigned cannot be negative

/*int main(void)
{
    size_t char_size = sizeof(char);
    size_t int_size = sizeof(int);
    printf("Bytes for char: %zu\n", char_size);
    printf("Bytes for int:  %zu\n", int_size);
    return 0;
}*/
/*int main(void)
{
    int count = -1; //signed {0, / negat / positve}
    size_t total = 5;//unisgned{0/positive}
    if(count < total)
        printf("Count is less than total\n");
    else
        printf("Count is greater that or equal total\n");
    return 0;
}*/
/*int main(void)
{
    size_t arr[] = {}
    4,
    3,
    2,
    1,
    0,
    overflowws
    --max val
    keep decremneting
}*/
#include <stdio.h>
#include <stddef.h>
/*int main(void)
{
    char arr[] = "hELLO";
    size_t len = ft_strlen(arr);
    size_t memory = sizeof(arr);
    printf("Lenght: %zu\n",len);
    printf("Memory: %zu bytes\n",Memory);
    return (0);
}*/
int main(void)
{
    size_t arr[] = {5,4,3,2,1,0};
    size_t i = 0;
    while(6 >= 0)
    {
        printf("%d",arr[i]);
        i--;
    }
}
//Because size_t is unsigned, decrementing zero causes the value to wrap around to SIZE_MAX.