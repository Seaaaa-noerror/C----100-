// 求一个3*3矩阵对角线元素之和
#include <stdio.h>
// int main()
// {
//     int table[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}};
//     int i, j, sum;
//     sum = 0;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             if (i == j)
//             {
//                 sum += table[i][j];
//                 // printf("%d\n", table[i][j]);
//             }
//         }
//     }
//     printf("%d\n", sum);
//     return 0;
// }
//以上是特定的矩阵
//请输入矩阵
int main()
{
    // int table[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}};
    int i, j, sum,table[3][3];
    sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&table[i][j]);
            // if (i == j)
            // {
            //     sum += table[i][j];
            //     // printf("%d\n", table[i][j]);
            // }
        }
    }
    for(i = 0;i<3;i++){
        sum+=table[i][i];
    }
    printf("%d\n", sum);
    return 0;
}