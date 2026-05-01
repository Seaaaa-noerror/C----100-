//学习使用按位异或 ^  0^0=0; 0^1=1; 1^0=1; 1^1=0 
#include <stdio.h>
int main()
{
    int a,b;
    a=077;
    b=a^3;
    printf("b = %d \n",b);
    b^=7;
    printf("b = %d \n",b);
    return 0;
}