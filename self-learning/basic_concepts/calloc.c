//the calloc function
//contingous allocation
//allocated memory dynamically and sets all allocated bytes to 0.
//malloc is faster, but calloc leads to less bugs
//syntax: calloc(no of elements, size)

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 0; //say number of players
    printf("enter the number of players: ");
    scanf("%d", &num);
    
    int *scores = calloc(num, sizeof(int));//allocated

    for(int i = 0; i < num; i++){
        printf("enter the score #%d: ", i+1);
        scanf("%d", &scores[i]);
    }

    if (scores == NULL){
        printf("memoery allocation failed\n");
        return 1;
    }

    printf("the scores are: ");
    for (int i = 0; i < num; i++){
        printf("%d ", scores[i]);
    }
    printf("\n");

    free(scores); //freed memory
    scores = NULL; //freed the pointer

    return 0;
}