//要求输出国际象棋棋盘
// #include<stdio.h>
 
// int main()
// {
//     int i,j;
//     for(i=0;i<8;i++)
//     {
//         for(j=0;j<8;j++)
//             if((i+j)%2==0)
//                 printf("%c%c",219,219);
//             else printf("  ");
//         printf("\n");
//     }
//     return 0;
// }

//改一下更易理解
int main()
{
    int i,j;
    for(i=1;i<=8;i++)//直接从1开始跟容易理解，i=1就是第一行，下面j也是但要<=8
    {
        for(j=1;j<=8;j++)
            if((i+j)%2==0)//i与j同奇同偶排列
                printf("%c%c",219,219);//要显示扩展的ASCII码需要在437 OEM-美国这个下面显示
            else printf("  ");
        printf("\n");
    }
    return 0;
}
