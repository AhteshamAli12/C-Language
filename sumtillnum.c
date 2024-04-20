#include<stdio.h>

void main(){
    int num;
    int sum = 0;
    printf("Enter number : ");
    scanf("%d", &num);

    while(num>0){
        sum = sum + num;
        num--;
    }
    printf("Sum number is : %d", sum );

}