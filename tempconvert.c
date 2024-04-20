# include<stdio.h>

int main(){
    float cel, fah;
    printf("Enter temperature in celsius : ");
    scanf("%f", &cel);
    printf("Celsius : %f to Fahrenhiet : %f", cel, (cel*1.8)+32);

    return 0;
}