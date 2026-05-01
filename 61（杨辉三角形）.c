// 打印出杨辉三角形（要求打印出10行）。
//  1
//  1    1
//  1    2    1
//  1    3    3    1
//  1    4    6    4    1
#include <stdio.h>
int main()
{
    int i, j;
    int Y[10][10];//先保证形状正确，再塞入正确的值
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= i; j++)
        {

            if (j == 0 || j == i)
            {
                Y[i][j] = 1;
            }
            else if (i >= 2 )
            {
                Y[i][j] = Y[i - 1][j - 1] + Y[i - 1][j];
            }

            
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", Y[i][j]);
        }
        printf("\n");
    }
    return 0;
}