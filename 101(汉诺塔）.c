#include <stdio.h>
// 本质上是递归，游戏由三根柱子和若干个大小不一的圆盘组成，初始状态下，所有的圆盘按照大小顺序从大到小堆叠在其中一根柱子上。
// 目标是将所有圆盘从初始柱子移动到目标柱子，并遵守以下规则：
// 每次只能移动一个圆盘。
// 圆盘可以放在任何一根柱子上，但不能放在比它小的圆盘上。
void movedish(int n, char from, char temp, char to)
{//中最大的目标盘是c，但面对不同大小的盘，进行不同移动，目标盘是不一样的
    if (n == 1)//如果只有一个盘
    {
        printf("%c -->%c\n",from,to);
    }else{
        movedish(n-1,from,to,temp);//把小的通过目标盘全放在临时盘上
        printf("%c -->%c\n",from,to);//把大的盘移到目标盘
        movedish(n-1,temp,from,to);//临时盘到目标盘
    }
}
int main()
{
    // char from = 'A';
    // char temp = 'B';
    // char to = 'C';
    int k =3;
    movedish(k,'A','B','C');
    return 0;
}