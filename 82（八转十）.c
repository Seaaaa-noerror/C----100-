//八进制转换为十进制
#include<stdio.h>
int main(){
    // char c ='4';
    // int a = 4;
    // char k = '0';
    // printf("k = %d\n",k);
    // printf("c - a = %c\n",c-a);
    char s[20] = "123";//1*8^2 + 2*8^1 + 3*8^0
    int i = 0;
    int n = 0;
    while(s[i]!='\0'){
        n = n*8 + s[i] -'0';//将字符是s[i]转化为数字
        i++;
    }
    printf("%d",n);
    return 0;
}