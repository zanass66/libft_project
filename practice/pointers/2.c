#include <stdio.h>
/*int main(void)
{
    int score = 42;
    char grade = 'A';
    double bonus = 1.5;
    printf("%p\n", (void *)&score);
    printf("%p\n", (void *)&grade);
    printf("%p\n", (void *)&bonus);
    return 0;
}*/
/*int main(void)
{
    int a = 5;
    int b = 5;
    int *pa = &a;
    int *pb = &b;
    printf("%d\n", *pa == *pb); //operation is true hive 1
    printf("%d\n", pa == pb); // false return 0
    return 0;
}*/
/*int  main(void)
{
    int score = 10;
    int *p = &score;
    int  value = *p;
    *p =  25;
    int   after = score;
}*/
/*int   main(void)
{
    int scores[4] = {10,20,30,40};
    int *p = scores;
    printf("%p\n",(void *)p);//c20
    printf("%p\n",(void *)(p + 1)); //c24
    printf("%p\n",(void *)(p + 2));//c28
    return 0;
}
*/
/*int main(void)
{
    int scores[4] = {10, 20, 30, 40};
    int *p = scores;
    int a = *(p + 0);//read the score at index [0]
    printf("%d\n",a);
    int b = *(p + 2);//read the  score [2]
    printf("%d\n",b);
    p = p + 1; // p move forward  one  element,  now p point to[1]
    printf("%d\n",*p);
    int c = *p;
    printf("%d\n",c);
    int d = *(p + 2);
    printf("%d",d);
}*/
int    main(void)
{
    int  arr[5] = {1,2,3,4,5};
    int *p  =  arr;
    int i = 0;
    while(i < 5)
    {
        printf("%d\t",*(p + i));//with the bracklest move the pointer first   the  read  the value
        i++;
    }
    return 0;  
}