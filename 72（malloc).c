//创建一个链表。
//1.void* malloc(size_t size);
//2.void* realloc(void *ptr,size_t size);
//3.void free(void *p);
//以下是realloc函数使用指南
// 1. 原地扩展（首地址不变）
// 条件：如果当前内存块后面有足够的连续空闲空间
// 结果：直接在原地址后扩展，首地址保持不变
// 2. 异地迁移（首地址改变）
// 条件：如果当前内存块后面没有足够的连续空间
// 结果：在内存的其他位置重新分配40字节，将原20字节数据拷贝过去，然后释放原内存块
#include<stdio.h>
#include"stdlib.h"//malloc函数
#include"string.h"
int main(){
    // int *p = (int*) malloc(sizeof(int)*20);
    // int i = 10;
    // *p = i;
    // //free(p);//动态分配需要即使释放内存
    // printf("*p = %d\n",*p);
    char *p;//数组不能这样分配
    p = (char *)malloc(sizeof(char)*20);//将 malloc 返回的 void* 转换为 char*。返回的是有着20个字节内存的首地址
    strcpy(p,"hello");//用于将一个字符串复制到另一个字符串
    printf("%s sizeof(p)=%zd\n",p,sizeof(p));//sizeof 是C语言中的一个单目运算符,sizeof(p) 计算的是指针变量本身的大小，而不是它指向的内存大小。
    printf("%d\n",p);
    char *q;
    q = (char*)realloc(p,sizeof(char)*20);
    strcat(q,"teacher");//strcat函数是C语言中用于字符串连接的函数
    printf("%s sizeof(q)=%zd\n",q,sizeof(q));
    printf("%d\n",q);//首地址与q一样
    free(q);//free是先进后出释放
    free(p);
    return 0;
}