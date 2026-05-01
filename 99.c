// 有两个磁盘文件A和B,各存放一行字母，要求把这两个文件中的信息合并（按字母顺序排列），输出到一个新文件C中。
// 你需要先创建 A.txt 与 B.txt。
// fgets函数用于从指定流中读取字符串的函数
// char *fgets(char *str, int n, FILE *stream);//（放的地址，字节大小，从哪里读取）
// fgets 会读取最多 n-1 个字符，然后自动添加 \0 结尾
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *good, *great, *goal;
    int i, j, k;
    char str[100], str1[100];                                              // 原本两个文件的字符串
    char tem;                                                              // 用来交换的
    if ((good = fopen("C:/Users/LiliCat/Desktop/good.txt", "r+")) == NULL) // 一下检查文件是否存在
    {
        printf("Error : cannot open GOOD file!\n");
        exit(0);
    }
    fgets(str, 99, good); // 读取good文件的字符串
    fclose(good);
    if ((great = fopen("C:/Users/LiliCat/Desktop/great.txt", "r+")) == NULL)
    {
        printf("error:cannot open GOOD file!\n");
        exit(0);
    }
    fgets(str1, 99, great); // 读取great文件的字符串
    fclose(great);
    strcat(str, str1); // 合并在str,首地址仍然是str的地址
    for (i = 0; i < strlen(str); i++)
    {
        for (j = i+1; j < strlen(str); j++)//记住从什么开始
        {
            if (str[j] < str[i])
            { // 找到就和第一个换
                tem = str[i];
                str[i] = str[j];
                str[j] = tem;
            }
        }
    }
    if((goal = fopen("C:/Users/LiliCat/Desktop/goal.txt","r+")) == NULL){
        printf("error: cannot open GOAL file!\n");
        exit(0);
    }
    fputs(str,goal);
    // int fprintf(FILE *stream, const char *format, ...);  // 格式化输出
    // int fputs(const char *str, FILE *stream);            // 字符串输出
    fclose(goal);
    system("pause");
    return 0;
}