//学习使用register定义变量的方法。
//在C语言中，register关键字用于声明局部变量，以提高变量的访问速度。通常，
//局部变量存储在内存中，而使用register关键字声明的变量则存储在CPU的寄存器中。寄存器是CPU的高速缓存，访问速度比内存快得多。

#include <stdio.h>
int main()
{
    register int i;
    int tmp=0;
    for(i=1;i<=100;i++)
        tmp+=i;
    printf("sum = %d\n",tmp);
    return 0;
}