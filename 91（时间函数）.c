#include <stdio.h>      // 引入标准输入输出库，用于使用printf函数
#include <time.h>       // 引入时间处理库，用于时间相关的函数和类型

int main ()             // 主函数，程序入口
{
    time_t rawtime;     // 声明一个time_t类型的变量rawtime，用于存储从1970年1月1日至今的秒数（日历时间）
    struct tm * timeinfo; // 声明一个指向tm结构体的指针timeinfo，tm结构体用于存储分解的时间（年、月、日等）
    
    time (&rawtime);    // 调用time函数获取当前日历时间，并将其存入rawtime变量中
    timeinfo = localtime (&rawtime); // 调用localtime函数将rawtime转换为本地时间，并存入timeinfo指向的结构体
    printf ("The current local time: %s", asctime (timeinfo)); // 使用asctime将时间结构体转换为字符串并输出
    
    return 0;           // 程序正常结束
}