// 一个数如果恰好等于它的因子之和，这个数就称为"完数"，例如 6=1＋2＋3 ，请编程找出 1000 以内的所有完数。完数是特殊的自然数
#include <stdio.h>
int main()
{
    int a , j;
    int sum;
    //a = 1;
   // while(a < 1000){ //while干的for也能干
   for(a=1;a<1000;a++){
    sum =0; //在循环里面初始化，确保每次循环sum都从0开始
    for (j = 1; j < a; j++)
    {
        if (a % j == 0)
        {
        sum += j;
        }
    }
    if (a == sum)//判断是否为完数
    {
        printf("%d ", a);
    }
      //a++;
    }
    //}
   return 0 ;
}
// 封装一下函数
#include <stdio.h>
int compnumb(int a)
{
    int j;//这里不用再声明ale,上面已经有一个a了
    int sum;
    sum = 0;
    for (j = 1; j < a; j++) // 找出因数不包括本身
    {
        if (a % j == 0)
        {
            sum += j;
        }
    }
    if (a == sum) // 判断是否为完数
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    // int compnumb(int a)//后面不用加分号
    int a;//前面的a和后面的a不一样
    for (a = 1; a < 1000; a++)
        if (compnumb(a))//不用再写int直接调用
            printf("%d\n", a);
}