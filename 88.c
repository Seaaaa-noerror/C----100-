// 读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的 ＊。
#include <stdio.h>
// int main()
// {
//     int n;
//     int k;
//     k = 1;
//     while (k < 8)
//     {
//         //printf("Please enter the number at position %d from 1 to 50:\n", k);
//         scanf("%d", &n);
//         while (n < 1 || n > 50)
//         {
//             printf("wrong ! a number between 1 and 50:\n");
//             scanf("%d", &n);
//         }
//         while (n > 0)
//         {
//             printf("* ");
//             n--;
//         }
//         printf("\n");
//         k++;
//     }

//     return 0;
// }
// 以下是老师写的用的for循环
void star(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("*");
    }
}
int main()
{
    int n;
    int k;
    k = 1;
    while (k < 8)
    {
        scanf("%d", &n);
        star(n);
        printf("%d\n",k);
        k++;
    }
    return 0;
}