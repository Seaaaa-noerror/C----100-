//学习使用auto定义变量的用法。
#include <stdio.h>
int main()
{
    int i,num;
    num=2;
    for(i=0;i<3;i++)
    {
        printf("num x = %d \n",num);
        num++;
        {
            auto int num=1;//局部{}里使用
            printf(" num x = %d \n",num);
            num++;
        }
    }
    return 0;
}