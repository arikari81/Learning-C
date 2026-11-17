//exp 10b
//take input of a 3*3 matrix and compute the sum of each row, column and both diagonals

# include <stdio.h>

void sumMat(int mat[3][3], int n, int m){

    int sumrow1 = 0, sumrow2 = 0, sumrow3 = 0;
    int sumcol1 = 0, sumcol2 = 0, sumcol3 = 0;
    int sumdia1 = 0, sumdia2 = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i == 0){
                sumrow1 += mat[i][j];
            }
            if (i == 1){
                sumrow2 += mat[i][j];
            }
            if (i == 2){
                sumrow3 += mat[i][j];
            }
            if (j == 0){
                sumcol1 += mat[i][j];
            }
            if (j == 1){
                sumcol2 += mat[i][j];
            }
            if (j == 2){
                sumcol3 += mat[i][j];
            }
            if (j == i){
                sumdia1 += mat[i][j];
            }
            if (i + j == n -1){
                sumdia2 += mat[i][j];
            }
            
        }
    }

    printf("sum of row one is %d\n", sumrow1);
    printf("sum of row two is %d\n", sumrow2);
    printf("sum of row three is %d\n", sumrow3);
    printf("sum of col one is %d\n", sumcol1);
    printf("sum of col two is %d\n", sumcol2);
    printf("sum of col three is %d\n", sumcol3);
    printf("sum of dia one is %d\n", sumdia1);
    printf("sum of dia two is %d\n", sumdia2);
}

int main(){
    int n = 3, m =3;
    int mat[n][m];

    printf("emter the matrix: ");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("\n#(%d, %d): ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }printf("\n");

    sumMat(mat, 3, 3);

    return 0;
}



