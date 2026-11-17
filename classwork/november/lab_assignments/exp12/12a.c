// exp12a
// create a program that reads numbers continously until until the user enters a negative number
// use while loops and break

#include "stdio.h"

int main(){
    int n;
    printf("enter the number of numbers u wish to enter: ");

    int num[n];

    int i = 0;
    while(i < n){
        printf("enter num: ");
        scanf("%d", &n);
        if (n < 0){
            printf("negative number encountered.\n");
            break;
        }
    }
}






