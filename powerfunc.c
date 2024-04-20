#include <stdio.h>
void power(int num, int power);
int main() {
    power(2,1);
    return 0;
}

void power(int num, int power){
    int multi =1;
    if (power == 0){
        printf("Answer : 1\n");
    }
    if (power > 0){
    for (int  i = 1; i <= power; i++){
        multi = multi * num; 
    }
    }
    printf("Answer : %d", multi);
}
