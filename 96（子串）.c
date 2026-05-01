// 计算字符串中子串出现的次数 。
#include <stdio.h>
#include <string.h>
int func(char *str, char *str1)
{
    // char str[50];
    // char str1[50];
    int m = 0;
    int lenth = strlen(str);
    int lenth1 = strlen(str1);
    int i, j;
    // puts(str);
    // puts(str1);
    // printf("%c\n", *（str + 5）); // 地址是不可自加++的，str是数组名又是地址是个常量，指针变量可以自加
    for (i = 0; i < lenth; i++)
    {
        for (j = 0; j < lenth1; j++)
        { // printf("%c %c\n",str[i],str1[j]);
            if (*(str+i+j) != *(str1+j))//需要同时移动
            {

                break;
            }
        }
        if (j == lenth1)
        {

            m++;
        }
    }
    return m;
}
int main()
{
    
    int func(char *str, char *str1);
    char str[50] = "456712389023";
    char str1[50] = "123";
    int m = func(str, str1);//return的值要装在变量m里
    printf("%d", m);
    return 0;
}