//回答结果（结构体变量传递）。
//初始化；改变值
#include<stdio.h>
struct student{
    int age;
    char gender;
};
void change(struct student *a){//改变源数据需要用指针，否则就是在新的内存地址赋予，而不是原来的值改变
    a->age = 30;
    a->gender ='m';
}
int main(){
    struct student stu1;
    stu1.age = 18;
    stu1.gender = 'f';
    struct student *p;
    p = &stu1;
    printf("age = %d,gender = %c\n",stu1.age,stu1.gender);
    change(p);
    printf("age = %d,gender = %c\n",stu1.age,stu1.gender);
    return 0;
}