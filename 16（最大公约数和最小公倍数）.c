// 输入两个正整数m和n，求其最大公约数和最小公倍数。
// #include <stdio.h>
// int main()
// {
//     int n, m, i, j;
//     int gcd ,lcm;
//     scanf("%d %d", &m, &n);
//     for (i = 1; i <= m; i++)
//     {
//         if (m % i == 0&& n % i == 0)
//         {
//             gcd = i ;
//         }
//     }
//      printf("%d\n", gcd);
//     for(j=1;j<=n*m;j++){
//         if (j%n==0&&j%m==0){
//           lcm = j ;
//           break;
//         }
//     }
//       printf("%d",lcm);
// return 0;
// }
//简化一下最小公倍数等于两数之积除以最大公约数
// #include <stdio.h>
// int main()
// {
//     int n, m, i;
//     int gcd ,lcm;
//     scanf("%d %d", &m, &n);
//     for (i = 1; i <= m; i++)
//     {
//         if (m % i == 0&& n % i == 0)//最大公约数
//         {
//             gcd = i ;
//         }
//     }
//     printf("%d\n", gcd);
//     lcm=(n*m)/gcd;
//     printf("%d",lcm);
//return 0;
// }
//辗转相除法求最大公因数
#include <stdio.h>
int main()
{
  int n, m, r, i, j;
  scanf("%d %d", &m, &n);
  i=m;
  j=n;
  r=m%n;
  while(r!=0){
    m = n;
    n = r;
    r=m % n;
  }
  printf("%d %d",n,(i*j)/n);
  return 0;
}