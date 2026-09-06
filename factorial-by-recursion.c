/*factorial finding by recursive function*/

#include <stdio.h>

int factorial(int i)
{
    if (i == 0 || i == 1)
    {
        return 1;
    }
    else
    {
        int fac = i * factorial(i - 1);
        return fac;
    }
}

/*main*/
int main()
{
    int num1;
    printf("Ente the number for which you'd like the factorial evaluated: \n");
    scanf("%d", &num1);

    int res = factorial(num1);
    printf("The factorial for %d is %d.\n", num1, res);

    return 0;
}