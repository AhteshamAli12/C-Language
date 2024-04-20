# include<stdio.h>

int main(){
    int num1, num2;
    printf("\n");
    printf("**********Enter two digits to add*********\n");
    printf("\n");
    printf("Enter first digit : ");
    scanf("%d", &num1);
    printf("Enter second digit : ");
    scanf("%d", &num2);

    printf("Sum is : %d", num1 + num2);
    return 0;
}