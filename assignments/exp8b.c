//exp 8b
//find the largest input out of multiple inputs

#include <stdio.h>

int main(){
    int n;
    printf("enter the number of inputs: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter the inputs: \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int temp = 0, tempind = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > temp){
            temp = arr[i];
            tempind = i;
        }
    }

    printf("%d is the largest value entered at index #%d\n", temp, tempind);

    return 0;
}








