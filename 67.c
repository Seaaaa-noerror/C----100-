// 输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
#include <stdio.h>
void swap(int *a, int *b)//调换位子用指针,swap函数里面要用指针传送
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int number[10] = {1, 2, 4, 2, 1, 4, 2, 1, 3, 1}, i, j, k, temp;
    for (i = 0; i < 10; i++)//被比较的i为基础数
    {
        for (k = 0; k < 10; k++)
        {
            if (number[i] < number[k])
            {
                break;
                //    temp = number[i];
                //    number[i]=number[k];
                //    number[k]=temp;
            }
        }
        if (k >= 10)//说明内层循环一遍没有数比i小
        {
            printf("%d ", number[i]);
        }
    }
    // for (j = 0; j < 10; j++)
    // {
    //     printf("%d ", number[j]);
    // }
    return 0;
}
int main(){
    int a[5] = {2,7,3,1,5};
    int i,x,n;
    int *p;
    int max,min,temp;
    max = a[0];//第一个为基础数，找到符合条件的就和他换
    min = a[0];
    for(i=1;i<5;i++){
     if(a[i]>max){
        max = a[i];
        x = i;//把位置存下来
     }
     if(a[i]<min){
        min = a[i];
        n = i;
     }
    }
    // temp = a[4];
    // a[4] = a[n];
    // a[n] = temp;
    swap(&a[n],&a[4]);
    swap(&a[x], &a[0]);
    //p = a;//p叫做指针变量，地址,a是首地址
    // for(i=0;i<5;i++){
    //     scanf("%d",&a[i]);//输入一个1.回车,2.空格，3.tab来间隔
    // }
    for(p=a;p<a+5;p++){
        printf("%-4d",*p);
    }
    //printf("\n");
    return 0;
}