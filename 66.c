//题目：输入3个数a,b,c，按大小顺序输出。
//程序分析：利用指针方法。
#include<stdio.h>
void sort(int *a,int *b,int *c){//这是运用了指针
    int max,min,mid;
    max = (*a> *b?*a : *b)>*c?(*a> *b?*a : *b):*c ;
    min = (*a< *b?*a : *b)<*c?(*a< *b?*a : *b):*c ;
    mid = *a+*b+*c -max -min;
    printf("max = %d,mid = %d, min =%d",max,mid,min);
}
int main(){
    int a,b,c;
    printf("please enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    sort(&a,&b,&c);//前面用了指针的变量，这里的变量就需要取地址符
    return 0;
}