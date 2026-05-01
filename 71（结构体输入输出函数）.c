//编写input()和output()函数输入，输出5个学生的数据记录。
//1.函数：定义；声明；调用
//2.学生的数据记录。“实体”，“对象”，结构体
//3.多个结构体：结构体数组
#include<stdio.h>
#include"string.h"//strcpy函数
struct student{
    char name[20];
    char gender[5];
    int age;
};
//定义了一种新的数据类型
// int main(){
//     //stu1.name[]字符串不能被直接输入进数组里面
//     //stu1.sex[]
//     struct student stu1;//要先声明数据类型
//     strcpy(stu1.name,"sear");//字符串需要这么写
//     strcpy(stu1.sex,"man");
//     stu1.age = 10; 
//     printf("name is %s,gender is %s,age is %d\n",stu1.name,stu1.sex,stu1.age);
//     return 0;
// }
//多个就写数组
void input(struct student *stu){//为什么函数变量这么写？数组作为函数参数会退化为指针
    int i;
    for(i=0;i<3;i++){
        scanf("%s%s%d",stu[i].name,stu[i].gender,&stu[i].age);
    }
}
// // 这两种写法在函数参数中是等价的
// void input(struct person *p);
// void input(struct person p[]);  // 编译器会将其转换为指针
void output(struct student *stu){
    int i;
    for(i=0;i<3;i++){
        printf("name is %s, gender is %s, age is %d\n",stu[i].name,stu[i].gender,stu[i].age);
    }
}
int main(){
    struct student stu[3];
    void input(struct student *stu);
    void output(struct student *stu);
    input(stu);
    output(stu);
    return 0; 
}