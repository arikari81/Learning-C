// passing 2d matrices to functions

#include <stdio.h>

// its dimensions must be specified
// array size informarion must be given separately for the total rows and the size of those rows

void printarr(int arr[3][3], int n, int m){ // size of the row can be omitted to no change
    for (int i = 0; i < n; i++){ // size of the columns, however must be never omitted
        printf("\t");
        for (int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //passing:

    printarr(arr, 3, 3);

    return 0;
}

