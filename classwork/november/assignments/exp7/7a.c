// program to return the maximum inieger of an array using recursion

#include <stdio.h>

int retMax(int size, int *intarr){
    if (size == 1){
        return intarr[0];
    }

    int max = retMax(size - 1, intarr + 1);

    if ( max < intarr[0]){
        return intarr[0];
    }
    
    return max;
}

int main(){

    int n = 9;
    int arr[n];

    printf("enter %d elemts: \n", n);
    for (int i = 0; i < n; i++){
        printf("\tenter #%d: ", i+1);
        scanf("%d", &arr[i]);
        printf("\n");
    }

    printf("The elemets are: \n ");
    printf("[");
    for (int i = 0; i < n; i++){
        printf(" %d,", arr[i]);
    }
    printf("]\n");
    
    printf("the max of this array is: %d\n", retMax(n, arr));

    return 0;
}



