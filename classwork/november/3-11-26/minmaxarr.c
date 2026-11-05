//minimum and maximium of an array

#include <stdio.h>

int main(){
    int arr[6];
    printf("enter elements: \n");
    for (int i = 0; i < 6; i++){
        printf("#%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("elemets: \n");
    for (int i = 0; i < 6; i++){
        printf("#%d: %d\n", i+1, arr[i]);
    }

    int max = 0;
    int min = arr[0];

    for (int i = 0; i < 6; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("max is %d\n", max);
    printf("min is %d\n", min);
    
    return 0;
}


