# include<stdio.h>

int main(){
    int num1, num2, num3;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);
    printf("Enter number 3 : ");
    scanf("%d", &num3);

    if (num1>num2 && num1>num3){
        printf("%d is greater than %d and %d", num1, num2, num3);
    }
    else if (num2>num1 && num2>num3){
        printf("%d is greater than %d and %d", num2, num1, num3);
    }
    else if (num3>num1 && num3>num2){
        printf("%d is greater than %d and %d", num3, num1, num2);
    }
    else{
        printf("Error!");
    }

    
    
    return 0;
}