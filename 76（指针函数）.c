// 编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)。
#include <stdio.h>
//double sum = 0 ;//全局变量反复调用容易出错
double Even(int n)
{
    if (n == 2)
    {
       // sum += 1.0/2;//系统默认整型需要
//sum += 1.0 / n;        // 方法1：使用浮点字面量
// sum += (double)1 / n; // 方法2：类型转换
// sum += 1 / (double)n; // 方法3：类型转换
        // printf("1/%d ",n);
        // printf("evensum = %.4f\n", sum);
        return 1.0/2;//注意是否整型相除
    }
    else
    {
        //sum += 1.0 / n;
        // printf("1/%d + ",n);
        // n = n - 2;//n = n / 2;少了1/6
        // Even(n);
        return 1.0/n + Even(n-2);
    }
}
double Odd(int n)
{
    if (n == 1)
    {
        //sum += 1.0;
        // printf("1/%d ",n);
        // printf("oddsum = %.4f\n", sum);
        return 1.0;
    }
    else
    {
        // sum += 1.0 / n;
        // printf("1/%d + ",n);
        // n = n - 2;
        // Odd(n);
        return 1.0/n + Odd(n-2);
    }
}
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     if (a % 2 == 0)
//     {

//         printf("1/2+1/4+...+1/n = %.4f", Even(a));
//     }
//     else
//     {
//         printf("1/1+1/3+...+1/n = %.4f",Odd(a));
//     }
//     return 0;
// }
// 接下来是老师教的指针函数
// 1.指针函数：返回指针的函数 2.函数指针：指向函数的指针typedef int(*fun_ptr)(int,int) = &ptr
double Even(int n)
{
    if (n == 2)
    {
        return 1.0 / 2;
    }
    else
    {
        return 1.0 / n + Even(n - 2);
    }
}
double Odd(int n)
{
    if (n == 1)
    {
        return 1.0;
    }
    else
    {
        return 1.0 / n + Odd(n - 2);
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    double (*p_Even)(int) = &Even; // 函数指针，取地址符可加可不加
    double (*p_Odd)(int) = &Odd;
    if (a % 2 == 0)
    {
        printf("1/2+1/4+...+1/n = %.4f", p_Even(a)); // 也可以写（*p_Even）(a)
    }
    else
    {
        printf("1/1+1/3+...+1/n = %.4f", p_Odd(a));
    }
    return 0;
}