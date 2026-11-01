#include <stdio.h>
int add(int a, int b)
{
    return (a+b);
}
int sub(int a, int b)
{
    return (a-b);
}
int mul(int a, int b)
{
    return (a * b);
}
int main(void)
{
    int (*op)(int,int) = add; /*If op holds the address of add, 
                                then op(2, 3) runs add with 2 and 3*/
    int r1 = op(2,3); //5
    op = mul;
    int r2 = (*op)(2,3);//the * is optional
    printf("%d %d",r1, r2);
    return 0;
}
/*int main(void)
{
    int (*op)(int, int) = add;
    //int a = op(4,5);
    int b = (*op)(4, 5);
    printf("%d\n",(*op)(4,5));
    printf("%d\n",b);
    return (0);
    //int (*op)(int, int); // with (*op) is a pointer function
    //int *op (int, int ); //a function returning an int pointer
}*/

// int main(void)
// {
//     void *op = add;
//     int res = add(6,7);
//     printf("%p\n",(void*)op);
//     printf("%d\n",res);
//     return 0; 
// }

/*int main(void)
{
    int (*sub_values)(int,int) = sub;
    printf("%d",(*sub_values)(10,5));
}*/
/*int main(void)
{
    printf("%p\n",(void *)add);//get the address of add function
    printf("%p\n",(void *)&add);//this is the same as add
    return 0;
}*/
