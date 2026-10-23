// syntax : return_type (*pointer_name)(parametrs_type)
// the program defines a function x, and stores its address int the 
// function ptr .
#include <stdio.h>
// returnType (*pointerName)(para1,para2,...);
//int (*ptr)(int, int)
// int add(int a, int b);

void    greetMorning(){printf("Good morning!\n");}
void    greetEvening(){printf("Good evening!\n");}
void    greet(void (*func)()){
    func();
}
void add(){printf("add\n"); }
void substract(){printf("substract\n"); }
void multiply(){printf("Multiply\n"); }
int main(void)
{
    void (*operations[3])() = {add, substract, multiply };
    int i = 0;
    while(i < 3)
    {
        operations[i]();
        i++;
    }
    return 0;
}