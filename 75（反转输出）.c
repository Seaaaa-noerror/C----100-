//输入一个整数，并将其反转后输出。123--321;431---134
#include<stdio.h>
//混啊乱斗
// int main(){
//     int n, m, i, k, c;
//     scanf("%d",&n);
//     k = 10;
//     m = 1;
//     c = n%10;
//     while(n/k>=1){
//         k*=10;
//         c = n/10;
//     }
//     for(i = 1;i <= m; i++){
//         a = n%10*100;
//         b = n/10%10*10;
//         c = n/100%10
//         b = n/10
//         sum = a+b+c;
//     }
//     printf("%d",c);
//     return 0;
// }
//老师做的
int main(){
    int n;
    scanf("%d",&n);
    int m =0;
    int k =0;
    while(n>0){
        k = n%10;//个位
        m = m*10 +k;//之前的个位*10加上新的各位
        n = n/10;//移到上一位
    }
    printf("%d",m);
    return 0;
}
// 过程
// n = 123;
// k = n % 10 = 3;
// m = k;
// k2 = n/10 %10 = 2;
// m  = k*10 + k2;
// k3 = n/100%10 = 1;
// m = k*100 + k2*10 +k3;
// 循环只要k!= 0;
// while{
//     k = n%10;
//     m = m*10+k
//     n = n/10;
// }