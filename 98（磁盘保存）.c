// 从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件"test"中保存。 输入的字符串以！结束。
#include <stdio.h>
#include <string.h>
// int main()
// {
//     // char c1 = 'a';
//     // char c2 = 'A';
//     // printf("%d",c2-c1);
//     FILE *fp;
//     char *myfile = "C:/Users/LiliCat/Desktop/great.txt";
//     fp = fopen(myfile, "at+");
//     char c;
//     if (fp == NULL)
//     {
//         printf("cant open\n");
//         return 1;
//     }
//     else
//     {
//         printf("successful open!\n");
//         while ((c = getchar()) != '!')
//         {
//             c -= 32;
//             fputc(c, fp);
//         }
//     }

//     // char c[50] = "asdfghj";
//     // int i;
//     // for (i = 0; i < strlen(c); i++)
//     // {
//     //     c[i] -= 32;
//     // }
//     // puts(c);
//     fclose(fp);
//     return 0;
// }
// 按照网站所说输入一个字符串
int main()
{
    FILE *fp;
    char *myfile = "C:/Users/LiliCat/Desktop/great.txt";
    fp = fopen(myfile, "at+");
    char str[50];
    int i;
    fgets(str, sizeof(str), stdin);//fgets要检查文件长度更安全
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] <= 'z' && str[i] >= 'a')
        {
            str[i] -= 32;
        }
    }
    if (fp == NULL)
    {
        printf("cant open\n");
        return 1;
    }
    else
    {
        printf("successful open!\n");
        fprintf(fp, "%s", str);//前面第一个函数变量是文件地址
    }
    fclose(fp);
    return 0;
}