/*Matrix PRINITNG*/

#include <stdio.h>
int main()
{
    int mat[2][2];  /*two rows of two elements*/
    
    /*input*/
    printf("Enter the elements of the matrix: \n");
    for (int i = 0;  i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    /*printing the matrix*/

    printf("Matrix elements: \n");
    for (int i = 0;  i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}