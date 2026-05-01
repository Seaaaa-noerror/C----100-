// 将一个正整数分解质因数。例如：输入 90,打印出 90=2*3*3*5。
#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    while (a > 1)
    {
        for (i = 2; i <= a; i++)
        {
            if (a % i == 0)
            {
                printf("%d ", i);
                a = a / i;
                break;//从头开始找因数
            }
        }
    }
}

#include <stdio.h>
int main()
{
    int a, i, k;
    scanf("%d", &k);
    while (k--)
    {
        scanf("%d", &a);
        while (a > 1)
        {
            for (i = 2; i <= a; i++)
            {
                if (a % i == 0)
                {
                    a = a / i;
                    if (a == 1)
                        printf("%d\n", i);
                    else
                        printf("%d*", i);
                    break;
                }
            }
        }
    }
    return 0;
}

// 老师写的代码
#include <stdio.h>
int main()
{
    int m, i;
    scanf("%d", &m);
    printf("%d=", m);
    for (i = 2; i <= m; i++)
    {
        while (m % i == 0) // while是if运行无数次
        {
            m = m / i;
            if (m == 1)//到后面就不用乘号了
            {
                printf("%d\n", i);
            }
            else
            {
                printf("%d*", i);
            }
        }
    }
}
