//输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
#include<stdio.h>
#define LEN 5
void print_x(char *highlight_text, char *generic_text);

#ifdef _WIN32 // 判断是不是win32位，64位一般包含这个宏
    #include <Windows.h>
    int main(){
        // 终端编码设置为UTF-8
        SetConsoleOutputCP(65001);
        print_x("█", "▒");
        system("pause");
        return 0;
    }
#elif __linux__ // 判断是不是Linux
    int main(){
        print_x("█", "▒");
        return 0;
    }
#endif

void print_x(char *highlight_text, char *generic_text){
    for (int i = 0; i < LEN; i++){
        for (int j = 0; j < LEN; j++){
            if (i == j || i + j == LEN - 1){
                printf("%s", highlight_text);
            } 
            else {
                printf("%s", generic_text);
            }
        }
        printf("\n");
    }
}