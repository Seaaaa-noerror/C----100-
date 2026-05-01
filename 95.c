//简单的结构体应用实例。
//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//

#include <stdio.h>
#include<string.h>

struct programming
{
    float constant;
    char *pointer;
};

int main()
{
    struct programming variable;
    char string[] = "菜鸟教程：https://www.runoob.com";
    
    variable.constant = 1.23;
    variable.pointer = string;//指针指向数组
    strcpy(variable.pointer,"sear");//复制
    
    printf("%f\n", variable.constant);
    printf("%s\n", variable.pointer);
    puts(variable.pointer);//输出字符串
    
    return 0;
}