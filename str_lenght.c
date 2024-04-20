#include<stdio.h>

int main()
{
    int count = 0;
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    printf("Total character in string is : %d", count-1);
    
    return 0;
}