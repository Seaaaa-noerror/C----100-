//字符串连接
//1.strcat函数用于将一个字符串追加到另一个字符串的末尾。 2.puts函数函数会输出参数中的字符串
#include<stdio.h>
#include"string.h"
#include"stdlib.h"
int main(){
    char str1[50]="you are ";
    char str2[50]="beautiful";
    // strcat(str1,str2);
    char *str = (char*)malloc(strlen(str1)+strlen(str2)+1);
    str[0]='\0';
    strcat(str,str1);//分配的内存包含随机数据，strcat需要以null,'0'结尾的字符串
    strcat(str,str2);//注意是粘到末尾
    puts(str);
    free(str);
    return 0;
}