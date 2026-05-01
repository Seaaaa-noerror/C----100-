//将一个数组逆序输出。
#include<stdio.h>
// int main(){
//     int i,length,temp;
//     int c[10]={1,2,3,4,5,6,7,8,9,0};
//     length = sizeof(c)/sizeof(int);//计算出长度好遍历
//     for(i=0;i<length/2;i++){
//         temp = c[i];
//         c[i] = c[length-1-i];
//         c[length-1-i] = temp;
//     }
//     for(i=0;i<10;i++){
//        printf("%d ",c[i]);
//     }
//     return 0;

// }
//指针
int main(){
    int c[10]={1,2,3,4,5,6,7,8,9,0};
    int*p = c;
    int len,i,temp;
    len = 1;
    while(*p!= 0){
        len++;
        p++;//c语言中，p++ 已经自动考虑了int类型的大小，实际上在内存中移动了4字节，但从数组索引的角度看，它只是移动到了下一个元素位置。
        //printf("%d\n",*p);
    }
    //printf("%d",len);
    for(i=0;i<len/2;i++){
        temp = *(c+i);//同理自动考虑了int类型的大小
        *(c+i) = *(c+len-1-i); 
        *(c+len-1-i) = temp;
    }
    for(i=0;i<10;i++){
        printf("%d ",c[i]);
    }
    return 0;
}