#include <stdio.h>

int main()
{
    int num;
    int isprime = 1;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    
    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            isprime = 0;                 
            break;
        }
    }
    if (num>2 && isprime == 1){
        printf("%d is prime number", num);
    }
    else{
        printf("%d is not prime number", num);
    }
    return 0;
}