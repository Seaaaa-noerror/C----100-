//利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
#include <stdio.h>
int main(){
  float score ;
  while(scanf("%f",&score)!=EOF){
  if(score<0||score>100){
    printf("Wrong Input,Please re-enter");
  }else{
    printf("%c",(score>=90)?'A':((score>=60)?'B':'C'));//字符要加‘’符号s
  }
  }
}
  