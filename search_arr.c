#include<stdio.h>

int main()
{
    int num[] = {1,2,3,4,4,5,645,74};
    int n = sizeof(num)/sizeof(num[0]);
    int find;
    printf("ENter a number: ");
    scanf("%d", &find);

    for (int i = 0; i < n; i++)
    {
        if (find == num[i])
        {
            printf("Number founded at %d index\n",i);
            return 1;
        }
    }
    printf("Number doesn't found!\n");
    return 0;
}