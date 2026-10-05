//value swaping via a function called by reference

#include <stdio.h>

void swap(int *a, int *b){ // to be called by reference

    int temp = *b;
    *b = *a;
    *a = temp;

}

int main(){

    int a = 10, b = 20;
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    swap(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
