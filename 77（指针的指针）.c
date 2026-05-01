// 练习指向指针的指针（使用多级指针遍历字符串数组）。
// 二级指针：指向指针的指针
#include <stdio.h>
// int main()
// {
//     int a = 100;
//     int *p1 = &a;
//     int **p2 = &p1;//p2是p1的地址；*p2是p1的值；**p2是a
//     //以下可以表示a的地址
//     printf("&a = %d\n",&a);
//     printf("&a = %d\n",p1);
//     printf("&a = %d\n",*p2);

//     printf("a = %d\n",a);
//     printf("a = %d\n",*p1);
//     printf("a = %d\n",**p2);
//     return 0;
// }
//二维数组用指针表示
// int main(){
//     int a[3][4]={{0,1,2,3},
//                  {4,5,6,7},
//                  {8,9,10,11}};
//     int *p0 = &a[0];//这是第一行的第一个值
//     int *p1 = &a[1];
//     int *p2 = &a[2];
//     printf("%d,%d,%d\n",*p0,*p1,*p2);
//     int (*p)[4] = a; // 这是：数组指针，int[4]的指针，包含4个int指针的数组（数组中有4个指针）
//     printf("%d\n",*(*(p+0)+0));//展示 p+1 移动的是整个行，而 *(p)+1 移动的是行内的元素，实际上可以写成p[0][0]的写法
//     return 0;
// }
int main(){
    const char *s[5] = {"man","girl","boy","husband","wife"};//这是一个指针数组，本质上是一个数组，其中的每个元素都是指针
    const char **q = &s ;
    int k;
    for(k = 0;k<5;k++){
        q = &s[k];
     printf("%s\n",*q);
    }
    return 0;
}
// **q 表示字符串的第一个字符
// q 是指向指针的指针
// *q 得到字符串指针首地址（如指向"man"）
// **q 得到该字符串的第一个字符（如 'm'）