// factorial using RECURSION

#include <stdio.h>

int factorial(int n){
    if (n == 0) // base case: tells the fucntion when to stop 
        return 1;

    return n*factorial(n-1); // recursive function
}

int main(){
    int num;
    printf("enter num: ");
    scanf("%d", &num);
    int fact = factorial(num);
    printf("%d is the factorial\n", fact);
    
    return 0;
}
