#include <stdio.h>
int main() {
    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;
    
    printf("Array elements via pointers: ");
    for(int i = 0; i < 4; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    
    return 0;
}