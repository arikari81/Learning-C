/*variable swap without temporary variable used*/
#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    printf("the initial values are a = %d, and b = %d\n", a, b);

    /*artihemtic operations*/
    a = a + b;
    b = a - b;
    a = a - b;
    printf("upon swapping the numbers are a = %d and b = %d\n", a, b);

    return 0;
}