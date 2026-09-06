/*variable swapping with temp*/
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    printf("the values pre swap are a = %d and b = %d\n", a, b);
    
    int temp;
    temp = a;
    a = b;
    b = temp;
    
    printf("now the values have been interchanged and they are as follows: a = %d, and  b = %d\n", a, b);

    return 0;
}