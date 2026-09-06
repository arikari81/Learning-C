/*matrix-Multiplication between two square matrices*/

#include <stdio.h>
int main()
{
    /*defining two input matrices 1 and 2*/
    int mat1[2][2];
    int mat2[2][2];

    /*defining the resultant matrix*/
    int res[2][2] = {0}; /*to prevent grabage values by setting elemets to 0 to begin with*/

    /*taking input to fill the matrices*/

    printf("Enter the elements for the first matrix: \n");
    for (int i = 0;  i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements for the second matrix: \n");
    for (int i = 0;  i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    /*printing them first to show the user the input*/

    printf("\tMatrix elements for matrix no. 1: \n");
    for (int i = 0;  i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\t%d ", mat1[i][j]);
        }
        printf("\n");
    }

     printf("\tMatrix elements for matrix no. 2: \n");
    for (int i = 0;  i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\t%d ", mat2[i][j]);
        }
        printf("\n");
    }

    /*multiplying the matrices*/

    for (int i = 0; i < 2; i++) /*for each row*/
    {
        for (int j = 0; j < 2; j++)  /*for individual elements within the rows*/
        {
            for (int k = 0; k < 2; k++) /*for each element of the resultant matric*/
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    /*printing the output*/

    printf("\n\tThe resulant matrix is: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\t%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}