/*program for checking even or odd*/

#include <stdio.h>
int main()
{
    int a;

    printf("enter the value of a: \n");
    scanf("%d", &a);

    if (a == 0 && a % 2 == 0)
    {
        printf("the nmber entered is even\n");
    }
    else
    {
        printf("the number entred is odd\n");
    }
    
    return 0;
}