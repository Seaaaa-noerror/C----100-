// 有五个学生，每个学生有3门课的成绩，从键盘输入以上数据（包括学生号，姓名，三门课成绩），计算出平均成绩
// 况原有的数据和计算出的平均分数存放在磁盘文件"stud"中。
#include <stdio.h>
struct student
{
    char number[8]; // 要么int型就不要数组，否则就是8个数字，要么字符型
    char name[20];
    int score[3];
};
int main()
{
    struct student stu[5];
    int i, j;
    double midscore[5] = {
        0,
    };
    for (i = 0; i < 5; i++) // 成绩输入分离
    {
        printf("enter the %d student:\n", i + 1); // 添加输入提示更加清晰
        scanf("%s%s", stu[i].number, stu[i].name);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &stu[i].score[j]);
            midscore[i] += stu[i].score[j];
        }
        midscore[i] = midscore[i] / 3.0; // 需要3个加在一起然后平均
    }
    FILE *fp;
    if ((fp = fopen("C:/Users/LiliCat/Desktop/goal.txt", "r+")) == NULL)
    {
        printf("error: cannot open GOAL file!\n");
    }else{
        printf("succssful!\n");
        for (i = 0; i < 5; i++)
    {
        
        fprintf(fp,"%s %s %.2f\n",stu[i].number, stu[i].name, midscore[i]);
    }
    }
    fclose(fp);
    return 0;
}