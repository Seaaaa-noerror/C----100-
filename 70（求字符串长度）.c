// 写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。
#include <stdio.h>
#include "string.h"
// 方法一（字符型）
//  int main()
//  {
//      char c;//需要初试化保证能进入循环
//      c = getchar();
//      int num = 0;
//      while (c != '\n')
//      {
//          num++;//当不是换行符的时候就加一个
//          c = getchar();//注意顺序
//      }
//      printf("%d",num);
//      return 0;
//  }
// 方法二（直接函数打印）
//  int main(){
//      char a[] ="i love u";
//      int len = strlen(a);
//      printf("%d",len);
//      return 0;
//  }
// 两种表示字符串，数组和指针
// 1. printf("%s",a);a为数组名2.printf("%s",p)p为指针名
// 方法三（指针遍历型）
int len(char a[])
{ // 传入数组
    int count = 0;
    char *p;
    p = a; // 不能是*p = a;需要时首地址相对应p是地址
    while (*p != '\0')
    { // 这里需要时*p!!!
        count++;
        p++;
    }
    return count;
}
int lenth(char *p)
{
    int count = 0;
    while (*p != '\0')//需要一个一个字符判断！
    {
        count++;
        p++;
    }
    return count;
}
int main()
{
    char c[] = "i love u";
    char *p = "i love u";//这个内存地址指向的数据类型是 char,地址本身没有类型（只是数值）
    printf("%d\n", len(c));
    printf("%d\n",lenth(p));
    return 0;
}