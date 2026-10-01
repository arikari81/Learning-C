//function calling

#include <stdio.h>

void swapbyval(int a, int b){ //call by value
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d within the function's scope after callig by value\n", a, b);
}

void swapbyref(int *a, int *b){ //call by reference
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("a = %d, b = %d, within the functions scope after calling by reference\n", *a, *b);
}

int main(){
    int a = 10, b = 20;
    printf("initially, a = %d, b = %d\n", a, b);
    swapbyval(a, b); //called by value  
    printf("a = %d, b = %d, after swap with call by value, outside scope of funtion\n", a, b);
    swapbyref(&a, &b); // called by reference
    printf("a = %d, b = %d, after swapping within main by usinf call by reference\n", a, b);
    return 0;
}