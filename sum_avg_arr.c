#include<stdio.h>

int main()
{
    int num[10]={1,2,4,5,6};
    int sum= 0, count = 0;
    for (int i = 0; i < 5; i++, count++)
    {
        sum = sum + num[i];
    }
    float avg = (float)sum/(float)count;
    printf("Sum is %d and average is %f", sum, avg);
    return 0;
}