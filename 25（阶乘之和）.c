// 求 1 + 2! + 3! + ... + 20! 的和
#include <stdio.h>
int main()
{
    long long int n, s;
    int j;
    n = 1;
    s = 0;
    for (j = 1; j <= 20; j++)
    {
        n = n * j;
        s = s + n;    
    }
    printf("%lld ", s);
    return 0;
}