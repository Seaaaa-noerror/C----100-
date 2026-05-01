// 找到年龄最大的人，并输出。请找出程序中有什么问题。
#include <stdio.h>
struct person
{
    char name[20];
    int age;
};
void input(struct person *p)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%s%d", p[i].name, &p[i].age);
    }
}
void output(struct person *p)
{
    int i, m;
    m = 0 ;
    for (i = 0; i < 3; i++)
    {
        if (p[i].age > p[m].age)//i和m比较，而不是i和0比较，否则会出现只要比第一个人大的就赋值给m，而不是最大的赋值给m
        {
           m = i;
            //printf("The oldest personThe oldest person is %s, age is %d", p[i].name,p[i].age);
        }//else{printf("The oldest personThe oldest person is %s, age is %d", p[0].name,p[i].age);}
    }
    printf("The oldest person is %s, age is %d", p[m].name,p[m].age);
}
int main()
{
    struct person p[3];
    void input(struct person *p);
    void output(struct person *p);
    input(p);
    output(p);
    return 0;
}
struct person
{
    char name[20];
    int age;
}
per[3]= {"sunliming",24,"yangmeng",22,"qiaohaoyue",21};//在这里给它赋值
int main(){
    struct person *p;
    p = per;
    int m = 0;
    struct person *q = NULL;//如果不初试化 危险：野指针
    for(int i = 0;i < 3;i++){
        if(p->age > m){
            m = p->age;
            q = p;
        }
        p++;//它会到下一个结构体
    }
    printf("%s,%d\n",q->name,q->age);
    return 0;
}
//#define NULL ((void *)0) 常见定义表示将整数 0 转换为空指针。
//(void *)：是一个类型转换，将后面的表达式转换为 void * 类型（无类型指针）
