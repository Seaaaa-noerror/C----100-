// 有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
#include <stdio.h>

int main()
{
    int a[20] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100};
    // int length;
    // length = sizeof(a)/sizeof(int);
    // printf("%d",length);
    int i, j;
    int b = 10;
    for (i = 0; i < 10; i++)
    {
        printf("%-4d", a[i]);
    }
    printf("\n");
    if (b > a[9])
    {
        a[10] = b;
    }
    else
    {
        for (i = 0; i < 9; i++)
        { // 先找位置
            if (b < a[i])
            {
                for (j = 9; j >= i; j--)
                {
                    a[j + 1] = a[j];
                }
                a[i] = b;
                break;
            }
        }
        for (i = 0; i < 11; i++)
        {
            printf("%-4d ", a[i]);
        }
    }
    return 0;
}