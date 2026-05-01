// 有n个人围成一圈，顺序排号。
// 从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
#include <stdio.h>
int main()
{
    int n, i, j, count;
    scanf("%d", &n); // 要先输入再填入数组的个数
    int a[n];
    // int temp[n];
    count = n;
    a[0] = 1;
    while (count > 1)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                if (a[i] % 3 != 0)
                {
                    a[i + 1] = a[i] + 1;
                }
                else
                {
                    a[i] = 3;
                    a[i + 1] = 1;
                }
                // temp[i] = a[i];
                if (a[i] == 3)
                {
                    a[i] = 0; // 0表示出局
                    count--;
                    printf("%d\n", count);
                }
            }
        }
        for (j = 0; j < n; j++)
        {
            for (i = 0; i < n; i++)
            {
                if (a[n - 1 - j] != 0 && a[i] != 0 && count != 1)
                {
                    a[i] = a[n - 1 - j] + 1;
                    break;
                }
            }
        }
    }
    // printf("%d\n", count);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        //      printf("%d ",temp[i]);
    }
    return 0;
}
// 分析题目要素：1.顺序排号2.报数（1-3）3.出局标记（0）
int main()
{
    int n, i, now, count;//now是报数，count是在局的人数
    scanf("%d", &n); // 要先输入再填入数组的个数
    // int a[n];
    int c[n];//用数组存now，就是他们的报数
    for(i=0;i<n;i++){//先让数组都为1，保证不等于0，无人出局
        c[i] = 1;
    }
    now = 0;
    count = n;
    while (count > 1)
    {
        for (i = 0; i < n; i++)
        {
            if(c[i] == 0){
                continue;//停止本次迭代到下一次迭代中
            }
            // if (c[i] != 0)//continue怎么用？
            // {
                // a[i] = i + 1;
                now++;
                if (now == 3)
                {
                    now = 0; // 标记出局
                    count--;
                }
                c[i] = now;
                // printf("%d ", c[i]);
            // }
        }
    }
    for (i = 0; i < n; i++)
    {
        //printf("%d ",c[i]);
        if (c[i] != 0)
        {
            break;
        }
    }
    printf("%d", i+1);
    return 0;
}
// 老师做的方法
int main()
{

    int index = 0;
    int number = 0;
    int count = 8;
    int table[100] = {1, 1, 1, 1};//后面默认补0
    for (int i = 1; i <= 8; i++)
    {
        table[i] = 1;
    }
    for (int i = 1; i <= 8; i++)
    {
        printf("%-4d", table[i]);
    }
    printf("\n");
    while(count > 0){
        index ++;//截至到8
        number ++;//截至到3
        while(table[index] == 0){//table[9] = 0,超过循环的数字或者踢出去的
            index++;
            if(index>8){
                index = 1;
            }
        }
        if(number == 3){
            table[index] = 0;
            printf("%-4d",index);
            count--;
            number = 0;
        }
    }
    return 0;
}