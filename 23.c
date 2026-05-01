// 打印出如下图案（菱形）。
//     *
//    ***
//   *****
//  *******
//   *****
//    ***
//     *
// 先把图形分成两部分来看待，前四行一个规律，后三行一个规律，利用双重for循环，第一层控制行，第二层控制列。1,4 2,3 3,2,4,1 52 63 56 65 74
#include <stdio.h>
// int main()
// {
//     int i, j, k;
//     for (i = 1; i <= 4; i++)
//     {
//         for (j = 1; j <= 7; j++)
//         {
//             if (j >= 5 - i && j <= 3 + i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     for (k = 5; k <= 7; k++)
//     {
//         for (j = 1; j <= 7; j++)
//         {
//             if (j >= k - 3 && j <= 11 - k)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
//老师的讲解
int main(){
    int i,j,k;
    for(i=0;i<4;i++){
        for(j=0;j<3-i;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++){
            printf("*");
          }
        printf("\n");
    }
    for(i=4;i<7;i++){
        for(j=0;j<i-3;j++){
            printf(" ");
        }
        for(k=0;k<5-(i-4)*2;k++){//4 5 5 3 6 1  13-2*i
            printf("*");
          }
          printf("\n");
    }
    return 0;
}