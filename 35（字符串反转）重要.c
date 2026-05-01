// 字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
#include <stdio.h>
#include "string.h"
// void string(int m){
//     char c;
//     if(m == 1){
//         c = getchar();
//         putchar(c);
//     }else{
//         c = getchar();
//         string(m-1);
//         putchar(c);
//     }
// }
// int main(){
//     char str[]="www.runoob.com";
//     int a = strlen(str);
//     string(a);
//     return 0;
// }//以上只能输出特定个数的字符
// 老师做的方法如下（普通的）
// int main()
// {
//     int len;
//     char str[] = "what is up?";
//     len = strlen(str);
//     char temp;
//     for (int i = 0; i < len / 2; i++)//分为奇数和偶数 偶数1234 1和4换 2和3换；奇数12345 1和4 2和4 5不用管 i<2.5,i只会取2
//     {
//         temp = str[i];//找一个中转站
//         str[i]=str[len-1-i];
//         str[len-1-i]=temp;
//     }
//     printf("%s",str);
//     return 0;
// }
//以下用指针
// int main()
// {
//     int len = 0;
//     char str[] = "what is up?";
//     char*p =str;
//     //printf("%c\n",*str);
//     while(*p != '\0'){//指针类似于i
//         len++;
//         p++;
//     }
//     char temp;
//     for (int i = 0; i < len / 2; i++)
//     {
//         temp = *(str+i);//*加数组名就是首地址
//         str[i]=*(str+len-1-i);//后面字母的位置
//         *(str+len-1-i)=temp;
//     }
//     printf("%s",str);
//     return 0;
// }
int main(){
    char c[]="you are great";
    char*p = c;//用来计算长度
    int len = 0;
    while(*p!='\0'){//计算字符串未知长度
        len++;
        p++;
    }
    int i;
    char temp;
    for(i=0;i<len/2;i++){
        temp = *(c+i);
        c[i] = *(c+len-i-1);//再减去一个1是因为首地址是从i=0开始数的
        *(c+len-i-1) = temp;
    }
    printf("%s",c);
    return 0;

}
//一些新的做法
// int main(){
//     char c[]="you are great";
//     char*p = c;//用来计算长度
//     int len = 0;
//     while(*p!='\0'){//计算字符串未知长度
//         len++;
//         p++;
//     }
//     int i,j;
//     j = len - 1;
//     char temp;
//     for(i=0;i<j;i++){
//         temp = *(c+i);
//         c[i] = *(c+j);//再减去一个1是因为首地址是从i=0开始数的
//         *(c+j) = temp;
//         j--;
//     }
//     printf("%s",c);
//     return 0;
// }