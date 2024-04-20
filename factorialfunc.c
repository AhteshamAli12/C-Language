#include <stdio.h>
int fact(int num);
int main() {
    fact(3);
    return 0;
}

int fact(int num){
    if (num - 1 == 0){
        return 0;
    }
    int fact1 = fact(num -1);
    int value = fact1*num;
    return value;
    
}