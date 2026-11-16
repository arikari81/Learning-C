// when arrays, and thus 2d arrays are passed to a fucntion, it decays
// to a pointer to its first elements
// for 2d arrays, the pointer points to the first row

#include <stdio.h>

void printarr(int (*arr)[3], int n, int m){
    for (int i = 0; i < n; i++){
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

    printarr(arr, 3, 3);

    return 0;
}


