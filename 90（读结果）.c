
#include<stdio.h>
#include<stdlib.h>

#define M 5
int main()
{
    int a[M]={1,2,3,4,5};
    int i,j,t;
    i=0;j=M-1;//指向了起始位置和末尾位置
    while(i<j)//前后反转
    {
        t=*(a+i);//首数组的元素
        *(a+i)=*(a+j);//前面等于后面
        *(a+j)=t;//后面等于前面的
        i++;j--;//首往后移，
    }
    for(i=0;i<M;i++) {
        printf("%d\n",*(a+i));
    }
    
}