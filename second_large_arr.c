#include<stdio.h>

int main()
{
    int num[]  = {100,23,523,23};
    int l = num[0], sl;
    for (int i = 0; i < 4; i++)
    {
       if (num[i]>l)
       {
        sl = l;
        l= num[i];

       } 
    }
    printf("Second largest number: %d", sl);
    
    return 0;
}