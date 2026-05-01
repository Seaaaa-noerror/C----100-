// 有 n 个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。
#include <stdio.h>
int main()
{
    int n, m, i, j; // n个整数,m个位置

    printf("n m = ? ?\n");
    while (scanf("%d %d", &n, &m) != EOF)//循环的时候注意什么数需要清0
    {
        j = 0;
        if (m > n || m < 0 || n < 0)
        {
            printf("invalid ! enter again ! \n");
        }
        else
        {
            printf("Please enter the elements of the array\n");
            int c[n], temp[m];
            for (i = 0; i < n; i++)
            {
                scanf("%d", &c[i]);
            }

            for (i = n - m; i <= n - 1; i++)
            {

                temp[j] = c[i];
                //printf("%d ", temp[j]);
                j++;
            }
            //
            for (i = n-m-1; i >=0 ; i--)//从后面开始移动确保不利用已被覆盖的数据
            {
                c[m+i] = c[i];
            }
            for (i = 0; i < m; i++)
            {
                c[i] = temp[i];
            }
            for (i = 0; i < n; i++)
            {
                 printf("%d ", c[i]);
            }
            printf("\n");
            printf("n m = ? ?\n");
        }
    }
    return 0;
}
// 老师的方法如下，他用的不是一段一段移动，而是用的循环每个移动
int main()
{
    int n, m, i; // n个整数,m个位置
    int *p;
    printf("n m = ? ?\n");
    while (scanf("%d %d", &n, &m) != EOF) // 循环的时候注意什么数需要清0
    {

        if (m > n || m < 0 || n < 0)
        {
            printf("invalid ! enter again ! \n");
        }
        else
        {
            printf("Please enter the elements of the array\n");
            int c[n], temp;
            for (i = 0; i < n; i++)
            {
                scanf("%d", &c[i]);
            }
            for (i = 0; i < m; i++)//循环个m次
            {
                p = c + n - 1;//这是把最后一个数字放在前面的操作
                temp = *p;
                while (p > c)
                {
                    *p = *(p - 1);
                    p--;
                }
                *p = temp;
            }
            for (p = c; p < c + n; p++)
            {
                printf("%d ", *p);
            }
            printf("\n");
            printf("n m = ? ?\n");
        }
    }
    return 0;
}