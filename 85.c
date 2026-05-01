// 判断一个素数能被几个9整除。
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool primenumber(int n)
{
    int i;
    int k = (int)sqrt(n);
    for (i = 2; i <= k; i++)
    {
        if (n % i == 0)
        {
            return true; // 只要不是素数就执行重新输入
        }
    }
    return false;
}
int main()
{
    int n, a, count;
    count = 1;
    a = 9;
    printf("please enter a primenumber:");
    scanf("%d", &n);
    while (primenumber(n))
    {
        printf("wrong!please enter a primenumber:");
        scanf("%d", &n);
    }
    while (a % n != 0)
    {
        a = a*10 + 9;
        count++;
    }
    printf("%d,%d",a,count);
    return 0;
}