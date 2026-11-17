// implementing a function to reverse an integer array

#include "stdio.h"

void revArr(int *arr, int *rev, int size){

    for (int i = 0; i < size; i++){
        rev[size-1-i] = arr[i];
    }

    printf("the reversed array is: ");
    for (int i = 0; i < size; i++){
        printf("%d, ", rev[i]);
    }printf("\n");
}

int main(){
    int n = 5;
    int nums[n];
    int rev[n];
    printf("enter nums: \n");
    for (int i = 0; i < n; i++ ){
        printf("#%d: ", i+1);
        scanf("%d", &nums[i]);
        printf("\n");
    }

    revArr(nums, rev, n);

    return 0;
}




