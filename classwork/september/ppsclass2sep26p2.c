/*chekcing for negative or positive number*/
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number to be checked: \n");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("The number is positive.\n");
    }
    else
    {
        printf("The number is negative.\n");
    }

    return 0;
}