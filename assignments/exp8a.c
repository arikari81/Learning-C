//exp 8a
//print the first n even numbers

#include <stdio.h>

int main(){
    int n;
    printf("enter the number of even numbers u want: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("%d ", 2*i);
    }
    printf("\n");

    return 0;
}







