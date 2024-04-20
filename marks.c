# include<stdio.h>

int main(){
    char name;
    int sub1, sub2, sub3;
    printf("Enter student name : ");
    scanf("%s", &name);
    printf("Enter your subject 1 marks : \n");
    scanf("%d", &sub1);
    printf("Enter your subject 2 marks : \n");
    scanf("%d", &sub2);
    printf("Enter your subject 3 marks : \n");
    scanf("%d", &sub3);

    int total = sub1+sub2+sub3;
    int avg = (sub1+sub2+sub3)/3;

    printf("your total marks is : %d and average is %d", total, avg);


    return 0;
}