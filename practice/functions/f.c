//pass by value 
//the function gets a copy of the value

#include <stdio.h>
int calculateSum(int x, int y)
{
    return x + y;
}
int main(void)
{
    int arr[3];
    arr[0] = calculateSum(2,3);
    arr[1] = calculateSum(10,6);
    arr[2] = calculateSum(5,7);
    int i = 0;
    while(i < 3)
    {
        printf("%d\t",arr[i]);
        i++;
    }
    return 0;
}