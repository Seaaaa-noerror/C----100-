// 一个偶数总能表示为两个素数之和。
//过程：1.先拿出偶数 2.找出它的素数加数 3.判断另一个加数是否为素数
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool primenumber(int m)
{
    int j;
    int k = (int)sqrt(m);
    for (j = 2; j <= k; j++)
    {
        if (m % j == 0)
        {
            return false;
        }
    }
    return true;//没有传回false时，所有说明if因数（除了1和它自身）还有整数不成立，还有就是没有进for循环条件的，即不是素数，返回一个true
}
int main()
{
    int n;
    printf("Please enter a Even number:\n");
    scanf("%d", &n); // 输入偶数
    while (n % 2 != 0)
    {
        printf("Wrong ! Please renter!");
        scanf("%d", &n);
    }
    int i;
    for (i = 2; i < n - 1; i++)
    { // 判断加数全部素数的可能性
        if (primenumber(i)&&primenumber(n-i))
        {
         printf("%d + %d\n",i,n-i);
        }
    }

    return 0;
}