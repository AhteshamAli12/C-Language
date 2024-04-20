#include<stdio.h>

int main()
{
    int num[5];
    printf("Enter arrays numbers: ");
    for (int i = 0; i<5; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("ENtered array is:\n");
    for (int i = 0; i<5; i++)
    {
        printf("%d ", num[i]);
    }
    int small = num[0];
    for (int i = 0; i<5; i++)
    {
        if (num[i]<small)
        {
            small = num[i];
        }
    }
    int large = num[0];
    for (int i = 0; i<5; i++)
    {
        if (num[i]>large)
        {
            large = num[i];
        }
    }

    printf("\nlargest number in array is %d and smallest %d", large, small);
    
    return 0;
}