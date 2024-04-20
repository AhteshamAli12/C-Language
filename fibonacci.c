#include<stdio.h>

int main(){
    int num, a = 0, b =1, c;
    printf("Enter number to get fibonacci series : ");
    scanf("%d", &num);

    do
    {
        
        printf("%d, ", a);
        c = a +b;
        a = b;
        b = c;
        
    } while (num >= a);
    

    return 0;
}