//#if #ifdef和#ifndef的综合应用。条件编译
#include<stdio.h>
// #define max//看这个是否出现
// #define maxmun(x,y) (x>y)?x:y
// #define minmun(x,y) (x>y)?y:x

// #if//程序大用条件编译
// #ifdef
// #ifndef
// int main(){
//     int a = 10, b = 20;
// #ifdef max
//     printf("max = %d\n",maxmun(a,b));
// #else
//     printf("min = %d\n",minmun(a,b));//这段代码不执行
// #endif//结束一定要加这个
// #define min//宏定义
// #ifndef min
//     printf("min = %d\n",minmun(a,b));//跳过这一句
// #else
//     printf("max = %d\n",maxmun(a,b));//没有定义就选择这一句
// #endif 
// //条件编译前没有宏定义的则相反使用
//     return 0;
// }
#define maxmun(x,y) (x>y)?x:y
#define minmun(x,y) (x>y)?y:x
int main(){
    int a = 10, b = 20;
#ifdef max
    printf("max = %d\n",maxmun(a,b));//这段代码不执行
#else
    printf("min = %d\n",minmun(a,b));
#endif
#define min//宏定义
#ifndef min
    printf("min = %d\n",minmun(a,b));
#else
    printf("max = %d\n",maxmun(a,b));//跳过这一句
#endif 
//条件编译前没有宏定义的则相反使用
    return 0;
}