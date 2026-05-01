//判断 101 到 200 之间的素数。素数只能被1和本身整除的数
// int 类型变量，系统会自动舍去小数部分，只保留整数部分。比如double i =8.2那么int i=8
  // #include <stdio.h>
  // #include <stdbool.h>
  // #include <math.h>
  // bool primenumber(int m){   //判断是否为素数
  //   int j;
  //   int k=(int)sqrt((double)m);//double 是一种双精度浮点类型
  //   for(j=2;j<=k;j++){
  //      if(m%j==0){
  //        //printf("smart ");//和false同在标记了m是素数
  //        return false; //它使得整个函数结束，在它之前的还能运行
  //        //printf("smart");//for循环和if满足条件才会被输出，但是return提起中断了整个函数
  //      }
  //     //printf("smart");//它在return满足条件之前，循环了几次输出几次，如果传入101循环了9次，在101之前输出9个smart
  //   }
  //   return true;//没有传回false时，所有说明if因数（除了1和它自身）还有整数不成立，即不是素数，返回一个true
  // }
  // int main(){
  //   bool primenumber(int m);
  //   int i;
  //   for(i=101;i<=200;i++){
  //      if(primenumber(i))   //传入参数i
  //        printf("%d ",i);
  //   }
  
  // }
//简化一下
#include<stdio.h>
#include<math.h>
int main()
{ 
    int i,j,k,m;
    int count=0;
    scanf("%d",&m);
    for(i=2;i<=m;i++)
    {
        k=sqrt(i);   //如果i不能被2~√i间任一整数整除，i必定是素数
        for(j=2;j<=k;j++){
          if(i%j==0)
            break;
        }
        if(j>k){//当j不符合条件未进入for循环,条件j<=k即2<=1为假,也符合j>k
          printf("%d ",i);
          count++;
          if(count%10==0){
            printf("\n");
          }
        }

    }
     
    // printf("%d",count);
        
}
