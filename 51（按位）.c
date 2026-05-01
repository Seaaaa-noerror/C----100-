// 学习使用按位与 &。
// 按位与 & 0&0=0; 0&1=0; 1&0=0; 1&1=1 选小的
// 按位或 | 0|0=0; 0|1=1; 1|0=1; 1|1=1 。选大的
// 按位异或 ^  0^0=0; 0^1=1; 1^0=1; 1^1=0 。相同的为0
#include <stdio.h>
#include <math.h>

long long int convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n != 0)
    {
        remainder = n % 2;
        // printf("Step %d: %d/2, 余数 = %d, 商 = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}
int main()
{
    long long int a = 12;
    long long int b = 13;
    // printf("10 system = %d\n",a);//10进制
    // printf("8 system = %o\n",a);//八进制
    // printf("16 system = %x\n",a);//16进制
    printf("2 system = %lld\n", convertDecimalToBinary(a));
    printf("2 system = %lld\n", convertDecimalToBinary(b));
    long long int c = a & b;
    printf("2 system = %lld\n", convertDecimalToBinary(c));
    c = a | b;
    printf("2 system = %lld\n", convertDecimalToBinary(c));
    c = a ^ b;
    printf("2 system = %04lld\n", convertDecimalToBinary(c));
    return 0;
}