// exp 12 b
// use both loop and recursion to compute the sum of digits

#include <stdio.h>

int sumRec(int *arr, int size, int sum){
    if (size == 0){
        return sum;
    }

    return sumRec(arr+1, size - 1, sum + *arr);
}

int sumLoop(int *arr, int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n = 4;
    int sum[n];

    printf("enter elemements:\n");
    for (int i = 0; i < n; i++){
        printf(">> ");
        scanf("%d", &sum[i]);
    }

    printf("the sum of all elements with using recursion is: %d\n", sumRec(sum, n, 0));
    printf("the sum of all elements with using iteration is: %d\n", sumLoop(sum, n));

    return 0;
}


