// 对10个数进行排序。
// 可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换， 下次类推，即用第二个元素与后8个进行比较，并进行交换。
#include <stdio.h>
int main()
{
    int number[10] = {1, 2, 4, 2, 1, 4, 2, 1, 3, 1}, i, j, k, temp;
    for (i = 0; i < 10; i++)
    {
        for (k = i+1; k < 10; k++)
        {
            if (number[i] > number[k])
            {
               temp = number[i];
               number[i]=number[k]; 
               number[k]=temp;
            }
        }
    }
    for (j = 0; j < 10; j++)
    {
        printf("%d ", number[j]);
    }
    return 0;
}