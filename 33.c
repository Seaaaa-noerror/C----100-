// 判断一个数字是否为质数。
#include <stdio.h>
#include <math.h>
int main()
{
    int i, k, a;
    while (scanf("%d", &a) != EOF)
    {
        k = sqrt(a);
        for (i = 2; i <= k; i++)
        {
            if (a % i == 0)
            {
                printf("it is not a primenumber\n");
                break;
            }
        }
        if (i > k)
        {
            printf("it is a primenumber\n");
        }
        
    }
    return 0;
}