# include<stdio.h>

int main(){
    float pi = 3.14;
    float rad;

    printf("Enter radius(int meters) of circle : ");
    scanf("%f", &rad);

    printf("Area of Circle is %f sqr meter", pi*rad*rad);

    return 0;
}