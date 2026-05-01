//古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
//证明兔子总数是斐波那契数列：假设第n个月兔子的总数为F（n）,则看出F（n）=新生+F（n-1）,新生是前F（n-2）的总数，所以F（n）=F(n-2)+F(n-1)
#include<stdio.h>
int main(){
    int rab[41]={0,1,1};//有一对兔子初始化
    int mon,i;//1-40mon
    printf("Please enter a number between 1 and 40 :");
    scanf("%d",&mon);
    printf("\n");
    //printf("%d\n",rab[2]);
    for(i=3;i<=mon;i++){
        rab[i]=rab[i-1]+rab[i-2];//斐波那契数列1，1，2，3，5，8，13...对
    }
    printf("The total number of rabbits in the month of %d is %d",mon,rab[mon]*2);//i只是一个索引,不是一个具体的数，具体的数值是mon；总数从对变成只乘以2
    return 0;
}
//以下为老师演示的方法
#include<stdio.h>
int main(){
    int a=1;//不要写成int a，b=1容易出问题
    int b=1;//有一对兔子
    int i;
    printf("\n");
    for(i=1;i<=10;i++){
        printf("%-4d %-4d",a,b);//-4要写在%后面才有效，否则就直接打印出来了
        printf("\n");
        a=a+b;//2
        b=b+a;//1+2；斐波那契数列1，1，2，3，5，8，13...对
    }
    
}

//小明是个非常无聊的人，他每天都会思考一些奇怪的问题，比如爬楼梯的时候，他就会想，如果每次可以上一级台阶或者两级台阶，那么上n级台阶一共有多少种方案?
//输入只有一行为一个正整数 n(1 ≤n≤50)。
//

#include<stdio.h>
int main(){
    long long int plan[51]={0,1,2};//long long类型的数据范围则更广
    int i;
    int step=1;
    //printf("The input consists of only one line with a positive integer n. (1<=n<=50):");
    scanf("%d",&step);
    // if(step<=0||step>50){
    //     printf("Input is invalid. Please re-enter!\n");
    // }
    for(i=3;i<=step;i++){
      plan[i]=plan[i-1]+plan[i-2];
    }
    //printf("There are %d different ways to climb %d steps.",step,plan[step]);
    printf("%lld\n",plan[step]);//转换说明为%lld
}
