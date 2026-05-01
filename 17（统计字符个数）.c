// 输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
// #include <stdio.h>
// int main()
// {
//     char c;
//     int letter = 0;
//     int number = 0;
//     int space = 0;
//     int other = 0;
//     c = getchar();
//     while (c != '\n')
//     {
//         if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//             letter++;
//         else if (c >= '0' && c <= '9')
//             number++;
//         else if (c == ' ')
//             space++;
//         else
//             other++;
//         c = getchar();
//     }
//     printf("letter=%d,number=%d,space=%d,other=%d",letter,number,space,other);
//     return 0;
// }


//字符串
#include<stdio.h>
int main(){
    char c[80];
    int i;
    gets(c);
    for(i=0;c[i]!='\0';i++)
        printf("%c",c[i]);
}