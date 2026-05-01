// 有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
#include <stdio.h>
// int main()
// {
//     double n, s;//float不行，用double
//     int numerator[20] = {2,};
//     int i, d;
//     s = 0;
//     d = 1;
//     for (i = 0; i < 20; i++)
//     {
//         printf("%d/", numerator[i]);
//         n = (double)numerator[i] / d;                      // n = 1.0 * numerator[i] / d;//如果左右操作数为整型，计算机默认为整型运算，前面加一个1.0*转换为doble
//         printf("%d=", d);
//         numerator[i + 1] = numerator[i] + d;
//         d = numerator[i];
//         printf("%.2f\n", n);
//         s+=n;
//     }
//     printf("sum = %.2f",s);
//     return 0;
// }
//斐波那契数列，老师写的
int main()
{   int a,b,i;//分子和分母
    double s;//数列和
    a = 2;
    b = 1;
    s = 0;
    for(i = 0;i < 20;i++)
    {
        s += (double) a / b;
        a = a + b;
        b = a - b;
        //printf("%.2f ",s);
        //s+=s;//前面在不停地赋值，后面加也米有用，只能成为最后一个数的两倍
    }
    printf("sum = %.2f",s);
    return 0;
}
