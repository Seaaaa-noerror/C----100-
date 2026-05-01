//利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
#include<stdio.h>
void invert(int n)
{
    char c;
    if(n==1)
    {
        c = getchar();
        putchar(c);
    }else{
        c = getchar();
        invert(n-1);//先从后面得数开始输出，输出完后跳出来输出前面的
        putchar(c);
    }
}
int main()
{ 
    invert(5);
    return 0;
}