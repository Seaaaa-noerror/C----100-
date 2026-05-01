//字符串排序。1.若干字符串 2.比较大小 strcmp(str1,str2)>0 <0 3.展示：a = 10;b =20;输出b,a或者swap(&a,&b),输出a,b
#include<stdio.h>
#include"string.h"//strcmp(str1,str2)>0 <0 
void swap(char *str1,char *str2){//数组作为函数参数变量退化为指针
    char temp[20];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}
int main(){

    char str1[20] = "1234";
    char str2[20] = "1134";
    // fgets(str2,20,stdin);//fgets更安全用于从指定的流中读取一行数据并存储到指定的字符数组中,变量为（存在哪个位置，最大字符数，标准输入）
    // printf("%s\n",str2);
    if(strcmp(str1,str2)>0){
        printf("str1 is bigger\n");
    }else{
        printf("str2  is bigger\n");
        swap(str1,str2);//保证前面一个是大的那个
    }
    printf("%s,%s\n",str1,str2);
    return 0;
}