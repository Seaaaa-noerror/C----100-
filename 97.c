// 从键盘输入一些字符，逐个把它们送到磁盘上去，直到输入一个‘#’为止。
// 1.scanf getchar() gets()
// 2.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // char str[20] = "uaregreat"; // 字符数组，存储在栈区（可修改）
    // scanf("%s", str);           // 去掉\n，避免输入问题
    // puts(str) ;
    // char *str = "uaregreat";// str指向只读内存
    // // 尝试修改只读内存，会导致未定义行为
    // scanf("%s\n", str);
    // puts(str);
    // //指针和数组的主要区别在于它们所指向的内存区域是否可修改。
    // char c;
    // c = getchar();
    // while (c != '#')
    // {
    //     // printf("c = %c\n",c);
    //     putchar(c); // 用printf末尾会输出回车，存到缓存区，最后被getchar
    //     c = getchar();
    // }

    FILE *fp; // 指向文件已打开文件
    char *myfile = "C:/Users/LiliCat/Desktop/great.txt"; // 文件路径得改成‘/’  //
    char c;
    fp = fopen(myfile, "at+"); // 后面是以什么方式打开(只读还是什么)r+，at+读改
    if (fp == NULL)
    {
        printf("wrong , cant open!\n");
        return 1;
    }
    else
    {
        printf("susseed!\n");
        while ((c = fgetc(fp)) != EOF)//!= 的优先级高于 =,所以要加括号(读文件)
        { // EOF表示到文件末尾了
            putchar(c);//输出
        }
        putchar('\n');
    //     while((c = getchar())!='#'){
    //         fputc(c,fp);//"r+"是覆盖着写，"at+"是不改之前的内容写（写文件）
    //     }
    }
    fclose(fp); // 关闭文件
    return 0;
}