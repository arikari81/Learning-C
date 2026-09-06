/*
1
12
123
1234
*/

#include <stdio.h>
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", j + 1);  /*printing 1 instead of 0, 2 instead of 1 and so on*/
        }
        printf("\n");
    }
    return 0;
}