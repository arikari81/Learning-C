// factorial using recusrsion

#include <stdio.h>

int fact(int  n){
    if (n == 0){ return 1;}

    return n * fact(n-1);
}

int main(void){

    int num;
    printf("enter a number:");
    scanf("%d", &num);

    printf("%d\n", fact(num));
}