#include <stdio.h>

int main() {
    int num = 2289;
    int digi = 0;

    // printf("Enter number : ");
    // scanf("%d", num);
    while (num > 0){
        num = num/10;
        digi++;
    }
    printf("%d", digi);
    return 0;
}