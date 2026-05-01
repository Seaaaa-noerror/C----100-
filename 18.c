// 求 s=a+aa+aaa+aaaa+aa...a 的值，其中 a 是一个数字，例如 2+22+222+2222+22222 (此时共有5个数相加)，几个数相加有键盘控制。
// #include <stdio.h>
// int main()
// {
//     double a,sum,j;
//     int k;
//     scanf("%lf %d", &a, &k);
//     sum = a;
//     j = a;
//     while (k != 1)
//     {   
//         a = 10 * a + j;
//         sum =sum + a;
//         k--;
//     }
//     printf("%.3lf",sum);
//     return 0;
// }
#include<stdio.h>
int main(){
    int a,k,i,sum;
    int s[100] = {a,};
    a = 2;
    k = 3;
    sum = 0;
    for(i=0;i<k;i++){
      s[i+1] = 10*s[i]+s[0];
      sum = sum + s[i];
    }
    printf("%d",sum);
    return 0 ;

}