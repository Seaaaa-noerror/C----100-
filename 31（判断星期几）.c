//请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
// 星期一：Monday (Mon.)
// 星期二：Tuesday (Tues.)
// 星期三：Wednesday (Wed.)
// 星期四：Thursday (Thu.)
// 星期五：Friday (Fri.)
// 星期六：Saturday (Sat.)
// 星期日：Sunday (Sun.)
#include<stdio.h>
// int main()
// {
//     char c ;
//     c = getchar();//getchar()函数会读取输入缓冲区中的所有字符，包括你按下的回车键（'\n'）
//     getchar();//读取回车符
//    //while(c != '\n'){
//         if(c == 'M'||c == 'm'){
//         printf("Monday\n");
//     }else if(c == 'T'||c == 't'){//这时候敲了一个回车键在缓冲区中，\n自动默认为下一个c,并打印funny,所以要读取回车符
//         printf("Please enter second letter.\n");
//         c = getchar();
//         //getchar();//这个有没有就无所谓，如果需要对比第三个字符就需要清空缓冲区，避免getchar读取了\n
//         if(c == 'U'||c == 'u'){
//             printf("Tuesday\n");
//         }else if(c == 'H'||c == 'h'){
//             printf("Thursday\n");
//         }else{
//             printf("funny");
//         }
//     }else if(c == 'W'||c =='w'){
//         printf("Wednesday\n");
//     }else if(c == 'F'||c =='f'){
//         printf("Friday\n");
//     }else if(c == 'S'||c =='s'){
//         printf("Please enter second letter.\n");
//         c = getchar();
//         //getchar();
//         if(c == 'A'||c == 'a'){
//             printf("Saturday\n");
//         }else if(c == 'U'||c == 'u'){
//             printf("Sunday\n");
//         }
//     }else{
//         printf("funny\n");
//     }
//     // c = getchar();
//     // }
//     return 0;
// }
//老师写的switch语句
int main(){
    char c;
    c = getchar();
    getchar();
    while(c != '0'){
        switch(c){
        case'm':
        printf("monday/n");
        break;
        case'w':
        printf("wednesday");
        break;
        case't':
        printf("please input another letter\n ");
        c = getchar();
        getchar();
        if(c == 'u'){
            printf("tuesday\n");
        }
        if(c == 'h'){
            printf("thursday\n");
        }
        break;
        case's':
        printf("please input another letter\n ");
        c = getchar();
        getchar();
        if(c == 'a'){
            printf("saturday\n");
        }
        if(c == 'u'){
            printf("sunday\n");
        }
        break;
    }
    c = getchar();
    getchar();
    }
    
    return 0;
}