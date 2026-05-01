// 求100之内的素数。
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int j;
bool prime(int m)
{
    int k = sqrt((double)m);//sqrt要求里面是个double类型
    for (j = 2; j <= k; j++)
    {
        if (m % j == 0)
        {
            return 0;
        }
    }
    if (j > m)
    {
        return 1;
    }
    return 1; // Ensure a return value in all cases
}
int main()
{
    int i, count;
    for (i = 2; i < 100; i++)
    {
        if (prime(i))
        {
            printf("%-2d ", i);
            count++;
            if (count % 5 == 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}