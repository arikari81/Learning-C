//checking for prime number

#include <stdio.h>

void checkPrime(int a){ //to check prime
    for (int i = 2; i < a; i++){
        if (i % a == 0){
            printf("not prime\n");
            break;
        }
        else{
            printf("prime\n");
            break;
        }
    }
}

int main(){
    int num;
    printf("enter a: ");
    scanf("%d", &num);
    checkPrime(num);
    return 0;
}