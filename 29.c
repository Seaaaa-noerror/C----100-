// 给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
#include <stdio.h>
// char number(int n)
// {
//     char c;
//     if (n == 1)
//     {
//         c = getchar();
//         putchar(c);
//     }
//     else
//     {
//         c = getchar();
//         number(n - 1);
//         putchar(c);
//     }
// }
// int main()
// {
//     char c;
//     c = getchar();
//     int count;
//     count = 0;
//     while (c != '\n')
//     {
//         if (c >= '0' && c <= '9')
//         {
//             count++;
//         }else
//         {
//             printf("ok");
//         }
//         c = getchar();
//     }
//     printf("%d\n",count);
//     int a;
//     a = count;
//     number(a);

//     return 0;
// }
//网站给出较为简单的版本分解各个数字
int main()
{
    long a,b,c,d,e,x;//long类型用于存储较大的整数，适合需要更大范围的场景。
    scanf("%ld",&x);
    a = x/10000;
    b = x%10000/1000;//需要把前面的数给除掉
    c = x%1000/100;//1234%1000为234再/100为2.34，2即为百位
    d = x%100/10;
    e = x%10;
    if(a!=0){
        printf("count=5, %ld%ld%ld%ld%ld",e,d,c,b,a);
    }else if(b!=0){
        printf("count=4, %ld%ld%ld%ld",e,d,c,b);
    }else if(c!=0){
        printf("count=3, %ld%ld%ld",e,d,c);
    }else if(b!=0){
        printf("count=2, %ld%ld",e,d);
    }else{
        printf("count=1, %ld",e);
    }
    return 0;
}