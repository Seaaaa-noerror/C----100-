//练习函数调用。
#include<stdio.h>
void hello_world(void)//void表示无类型，表示不返回任何值
{
   printf("Hello , world ! \n");
}
void three_hellos(void)
{
    int counter;
    for(counter = 1;counter <= 3; counter++)
      hello_world();//调用上一个函数
          
}
int main(void){
    three_hellos();//调用第二个函数
}