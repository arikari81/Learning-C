// pointer to pointer
#include <stdio.h>

int main(){
    int a = 10;

    int *ptr1;
    int **ptr2;
    int ***ptr3;

    ptr1 = &a;
    ptr2 = &ptr1;
    ptr3 = &ptr2;

    printf("ptr1 = %d\n", *ptr1);
    printf("ptr2 = %d\n", **ptr2);
    printf("ptr3 = %d\n", ***ptr3);
    printf("mem adress of ptr3 = %p\n", (void*)*ptr3);

    return 0;
}