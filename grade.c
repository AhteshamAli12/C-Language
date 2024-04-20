# include<stdio.h>

int main(){
    int per;
    printf("Enter your exam result ur percentage\n");
    printf("Enter percentage : ");
    scanf("%d", &per);

    switch (per)
    {
    case 90:
        printf("A+");
        break;
    case 80:
        printf("A");
        break;
    case 70:
        printf("B");
        break;
    case 60:
        printf("C");
        break;
    case 50:
        printf("D");
        break;
    case 40:
        printf("E");
        break;
    case 30:
        printf("F");
        break;
    
    default:
        break;
    }
    

    
    
    return 0;
}