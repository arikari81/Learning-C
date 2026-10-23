// the malloc function

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 0;
    printf("enter the number of grades: ");
    scanf("%d", &num);

    char *grades = malloc(num * sizeof(int)); // designating the space
    if (grades == NULL){
        printf("memory allocation failed\n");
        return 1; //means theres a probelem
    }

    // for examople: char *grades = malloc(100); means 100 bytes allocated in memory
    //memory in malloc is used from the heap

    for (int i = 0; i < num; i++){
        printf("enter grade #%d: ", i+1);
        scanf(" %c", &grades[i]);
    }

    printf("the grades are: \n");
    for (int i = 0; i < num; i++){
        
        printf("%c ", grades[i]);
        
    }
    printf("\n");

    free(grades); //returning to the stack, the unused memmory
    grades = NULL; // freeing the pointer(avoiding dangling pointers), 
    //bcs if a pointer exists which poits to memory not being used, it may cause issues

    return 0;
}