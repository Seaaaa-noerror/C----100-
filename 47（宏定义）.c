//宏#define命令练习2。
#include<stdio.h>
// #define exchange(a,b) {int t;t=a;a=b;b=t;}//函数需要在一行
// int main(){
//     int x = 10;
//     int y = 20;
//     printf("x=%d;y=%d\n",x,y);
//     exchange(x,y);
//     printf("x=%d;y=%d\n",x,y);
//     return 0;
// }
#define max(x,y) (x>y?x:y)
int main(){
    int a, b, c;
    a = 10;
    b = 20;
    // c = a + b;
    // printf("max = %d",max(a,c));
    c = max(a,a+b)*5;//注意优先级，不加括号就是a+b*5
    printf("max = %d",c);
    return 0;
}