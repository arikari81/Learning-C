// exp 14
// implement a list using dynamic memory allocation
// ie malloc or calloc im guessing

#include <stdio.h>
#include <stdlib.h>

int main (){
    int n;
    printf("enter the number of elements wanted in the list: ");
    scanf("%d", &n);

    int *newArr = malloc(n * sizeof(int));
    if(newArr == NULL){
        printf("memory allocation failed\n");
        return 1;
    }

    printf("the size of the array is %zu\n", n*sizeof *newArr);

    free(newArr);
    return 0;
}








