//exp 10c
// set a threshold and determine whether a matrix is a sparse matrix
// SPARSE MATRIX: where a usually vast majority and atleast a majority of elements are zero

#include <stdio.h>
int matSpar(int arr[3][3], int n, int m){
    int zeroTot = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(arr[i][j] == 0)
                zeroTot += 1;
        }
    }
    if (zeroTot > (m*n)/2 )
        return 1;
    return 0;
}

int main(){
    int n = 3, m = 3;
    int mat[n][m];

    printf("enter the matrix: \n");
    for (int i = 0; i < n; i++){
        for (int j  = 0; j < n; j++){
            printf("#(%d, %d): ", i+1, j+1);
            scanf("%d", &mat[i][j]);
            printf("\n");
        }
    }

    int yesno = matSpar(mat, n, m);
    printf("is it a sparse matrix? %s\n", yesno ? "yes" : "no");

    return 0;
}



