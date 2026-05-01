//两个乒乓球队进行比赛，各出三人，甲队为 a、b、c 三人，乙队为 x、y、z 三人。
//抽签决定比赛名单，有人向队员打听比赛的名单：a 说他不和 x 比，c 说他不和 x、z 比，请编写代码找出三队赛手的名单。
//c和y比，a和z比，b和x比
#include<stdio.h>
int main()
{
    //char teamA[]={'a','b','c'};
    //char teamB[]={'x','y','z'};
    int i,j,k;
    for(i='x';i<='z';i++)//枚举a的对手
    {
      for(j='x';j<='z';j++)//枚举b的对手
      {
        if(i!=j)
        {
          for(k='x';k<='z';k++)//枚举c的对手
         {
          if(k!=i&&k!=j)
          {
            if(i!='x'&&k!='x'&&k!='z')
            {
             printf("a--%c,b--%c,c--%c",i,j,k);
            }
          }
         }
        }
        
      }
    }
    return 0;
}