//输出 9*9 口诀。
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=i;j++){//这是一个倒三角型列数需要小于等于行数，否则跳出循环，实现换行
            printf("%d*%d=%-2d ",i,j,i*j);//-为左对齐，2表示这个位置有两个空位
        }
        printf("\n");
    }
}