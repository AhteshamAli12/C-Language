#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Happy new Year!";
    int l = strlen(str);
    for (int i = 0; i < l/2; i++)
    {
        char temp = str[i];
        str[i] = str[l-i-1];
        str[l-i-1] = temp;
    }
    printf("%s", str);
    
    return 0;
}