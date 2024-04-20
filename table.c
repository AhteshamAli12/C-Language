#include<stdio.h>

void main(){
    int num;
    int multi;
    printf("Enter number to print it\'s table\n");
    printf("\n");
    printf("Enter number : ");
    scanf("%d", &num);

    for (int i = 1; i<=10; i++)
    {
        multi = i*num;
        printf("%d X %d = %d\n", num, i, multi);
    }

}