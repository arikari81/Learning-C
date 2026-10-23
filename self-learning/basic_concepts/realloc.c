//the realloc function
//re-allocation is used to resize previously allocated memory
//realloc(pointer, bytes) is the syntax

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 0; //say number of prices
    printf("enter the number of prices: ");
    scanf("%d", &num);

    float *prices = malloc(num * sizeof(float));

    if (prices == NULL){
        printf("memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < num; i++){
        printf("enter price #%d: ", i+1);
        scanf("%f", &prices[i]);
    }

    int newnum = 0; //new number of prices
    printf("enter a new number of prices: ");
    scanf("%d", &newnum);

    float *temp = realloc(prices, newnum * sizeof(float)); //reallocation of memory

    if(temp == NULL){
        printf("could not reallocate memory");
    }else{
        prices = temp; //now temp is assigned to prices
        temp = NULL; //freeing the pointer

        for (int i = num; i < newnum; i++){
                printf("enter price #%d: ", i+1);
            scanf("%f", &prices[i]);
        }

        printf("there prices are : \n");
        for (int i = 0; i < newnum; i++){
            printf("Rs.%.2f\n", prices[i]);
        }
    }

    

    free(prices);
    prices = NULL;

    return 0;
}