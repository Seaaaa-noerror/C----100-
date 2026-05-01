//给你5个数，输出5个数字去重后的结果，顺序无所谓,这五个数字大于等于0，小于等于10
#include <stdio.h>
int main(){
    int a,b,c,d,e,i;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int num[20];
    for(int i=0;i<=10;i++)
        num[i]=0;
    num[a]++;
    num[b]++;
    num[c]++;
    num[d]++;
    num[e]++;
    for(int i=0;i<=10;i++)
        if(num[i]>0)
            printf("%d ",i);
    return 0;
}
