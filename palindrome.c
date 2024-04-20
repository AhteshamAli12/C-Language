#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "rarar";
    int n = strlen(str);
    int ispalin = 1;
    for (int i = 0; i < n/2; i++)
    {
        if (str[i] != str[n-1-i])
        {
            ispalin = 0;
        }
    }
    if (ispalin == 1)
    {
        printf("It is palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    }
    
    
    return 0;
}