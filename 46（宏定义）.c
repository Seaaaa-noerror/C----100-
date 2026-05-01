//宏#define命令练习。
#include<stdio.h>
#define TRUE 1 //前面是名字，后面是数运算符都行
#define FALSE 0
//宏定义的三种用法
//1. 给变量赋初始值
#define PI 3.14
//2.替换某一个操作符
#define MUTIPLY *
//3.定义函数
#define mj(a,b) a*b*b
int main(){
    float r = 1.5;
    float s = PI MUTIPLY r MUTIPLY r;
    printf("%f\n",s);
    printf("s = %f\n",mj(PI,r));
    // int num;
    // int again = 1;
    // while(again){  //大于50终止输入
    //     scanf("%d",&num);
    //     if(num >= 50){
    //         again = TRUE;

    //     }else{
    //         again = FALSE;
    //     }
    // }
    return 0;
}