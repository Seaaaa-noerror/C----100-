//宏#define命令练习3。
#include<stdio.h>
#define lag >
#define sma <
#define eq ==

int main(){
    printf("Please enter two number\n");
    double a, b;//double 是 C 语言中的一种浮点数据类型，主要用于表示需要高精度的小数或实数数据。 它是 双精度浮点型
    scanf("%lf %lf",&a,&b);//管在printf中可以使用%f来输出double类型的数据，但在使用scanf函数读取时，则必须使用%lf来防止精度丢失。
    if(a lag b){
        printf("%.3f>%.3f",a,b);//后面输出别加地址符。输入才加，同时double要用%lf来读入
    }else if(a sma b){
        printf("%.3f<%.3f",a,b);
    }else if(a eq b){
        printf("%.3f=%.3f",a,b);
    }else{
        printf("nothing");
    }
    return 0;
}
