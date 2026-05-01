// 一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
#include <stdio.h>
int main()
{
    long a, b, c, d, e, n;
    while (scanf("%ld", &n) != '\n')
    {
        e = n % 10;
        d = n % 100 / 10;

        b = n % 10000 / 1000;
        a = n / 10000;
        if (e == a && d == b)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    return 0;
}
