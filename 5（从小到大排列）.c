//输入三个整数 x、y、z，请把这三个数由小到大输出。
#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int minn,maxn,midn;
    minn = (x<y?x:y)<z?(x<y?x:y):z;
    maxn = (x>y?x:y)>z?(x>y?x:y):z;
    midn = x+y+z-minn-maxn;
    printf("%d,%d,%d",minn,midn,maxn);
    return 0;
}
