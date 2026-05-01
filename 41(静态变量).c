//学习 static 定义静态变量的用法。
// 在 C 语言中，static 关键字用于声明静态变量。静态变量与普通变量不同，它们的生存期和作用域是不同的。
// 静态变量在声明时被初始化，只被初始化一次，而且在整个程序的生命周期内都保持存在。
// 在函数内声明的静态变量只能在该函数内访问，而在函数外声明的静态变量则只能在该文件内访问。
#include<stdio.h>
// int num = 5;//同样的作用
void sellticket(){
    static int num = 5;//只初始化一次
    num--;
    printf("%d\n",num);
}
int main()
{
    int a = 10;//局部的动态变量auto
    printf("a = %d\n",a);
    for(a = 0;a < 5;a++){
        sellticket();
    }
    //printf("number = %d\n",number);
    return 0;
}