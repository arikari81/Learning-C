// 2D matrices initialisationv and traversal

#include <stdio.h>

int main(){

    int mat[2][2] = { //declaring the matrix
        {10, 20}, // i = 0, j = 0,1 ie row 1
        {30, 40} // i = 1, j = 0,1 ie row 2
    };

    //printing the elemets of a matrix: 
    printf("2D array elements: \n");
    for (int i = 0; i < 2; i++){
        printf("\t");
        for (int j = 0; j < 2; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// the total no of elements here is i*j = m(say)
// and thus the total size is sizeof(datatype)*m 

