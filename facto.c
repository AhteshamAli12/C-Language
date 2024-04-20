# include<stdio.h>

int main(){
    int num;
    int fact = 1;

    printf("Enter a number for factorial : ");
    scanf("%d", &num);
    while(num != 0){
        fact = fact * num;
        num--;
    }
    printf("%d", fact);

    return 0;
}