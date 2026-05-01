// 输入某年某月某日，判断这一天是这一年的第几天？
// #include <stdio.h>
// int main(){
//     printf("请输入年份、月份和日期（格式：年 月 日）：");
//     int year,month,date;
//     int sum;
//     int leap=0;
//     scanf("%d %d %d",&year,&month,&date);
    
//     switch(month){
//         case 1:sum=0;break;
//         case 2:sum=31;break;
//         case 3:sum=59;break;
//         case 4:sum=90;break;
//         case 5:sum=120;break;
//         case 6:sum=151;break;
//         case 7:sum=181;break;
//         case 8:sum=212;break;
//         case 9:sum=243;break;
//         case 10:sum=273;break;
//         case 11:sum=304;break; 
//         case 12:sum=334;break;
//         default:printf("输入无效，请输入正确的年份、月份和日期。\n");
//     }
//     if(year%400==0||(year%4==0&&year%100!=0)){
//         leap=1;
//         if(leap==1&&month>2){
//             sum++;
//         }
//     }else{
//         leap=0;
//     }
//     sum=sum + date;
//     printf("总天数是：%d\n",sum);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool judge(int n)//判断是否是闰年
{
    if(n%400==0||n%4==0&&n%100!=0)//注意括号相当于((n%400==0)||(n%4==0&&n%100!=0))因为&&或的运算符优先级高于||与
        return true;
    else
        return false;
}

int main(){
    int yue[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month,date;
    int sum;
    while(scanf("%d %d %d", &year, &month, &date) != EOF){//
        sum=0;
        if(judge(year))
            yue[2]=29;
        else
            yue[2]=28;
        if(year<0||month<1||month>12||date<1||date>yue[month])
        {
            printf("输入无效，请输入正确的年份、月份和日期。\n");
            continue;
        }
        for(int i=1;i<month;i++)
            sum+=yue[i];
        sum+=date;
        printf("%d\n",sum);
    }
    return 0;
}

// #include <stdio.h>
// int main(){
//     if(0)
//         printf("123");
//     return 0;
// }