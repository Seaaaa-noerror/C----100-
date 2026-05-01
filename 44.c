//学习使用如何调用外部函数。
#include <stdio.h>
int a,b,c;
void add()
{
    int a;
    a=3;
    c=a+b;
}
int main()
{
    a=b=4;
    add();
    int a =5; //这里前面加了一个int 是重新定义了一个变量，与之前的变量无关，c运用的是之前的a
    printf("a = %d\n",a);//离printf最近的a就输出哪一个,是5
    //c=a+b;这里的c就是9，因为a成为5进来运算了
    printf("c = %d\n",c);//a = 3;b=4因为函数离输出函数最近的那个赋值，b已经赋值了为4，然后函数又将a赋值为3
    return 0;
}