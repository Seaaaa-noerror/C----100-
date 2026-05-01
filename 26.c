// 利用递归方法求 5!  5*4*3*2*1
#include <stdio.h>
// int main()
// {
//     int i,n;
//     n = 1;
//     for(i = 1;i <= 5;i++)
//     {
//        n *= i;
//     }
//     printf("%d",n);
//     return 0;
// }
// 递归是用函数，并且函数体内反复调用 f(n) = n * f(n-1)

long factorial(int n)//long long和long double装得数据更长
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n* factorial(n-1);//嵌套一个函数
    }
}

int main()
{
    long factorial(int n);
    int a = 5;
    printf("%ld",factorial(a));
    return 0;
}