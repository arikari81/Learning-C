// the size of a union is dependant on the largest members

#include "stdio.h"

typedef union{
    int x;
    char y;
}A;

typedef union{
    int arr[10];
    char y;
}B;

int main(){

    printf("the size of A is %ld\n", sizeof(A));
    printf("the size of B is %ld\n", sizeof(B));

    return 0;
}




