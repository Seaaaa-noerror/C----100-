#include<stdio.h>
//#include 的应用练习。
#include"501.h"//这是创建的头文件名
int main(){
    float r = 1.5;
    float area = pi*r*r;
    printf("%.2f\n",area);
    int a = 20;
    int b = 30;
    printf("%d\n",add(a,b));

    return 0;
}