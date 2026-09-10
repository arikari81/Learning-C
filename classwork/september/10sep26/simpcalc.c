/*a simple calculator using swtich*/

#include <stdio.h>
int main()
{
    int a;
    int b;
    int res;
    int oper;
    

    printf("enter the numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("enter 1 to add, 2 to subtract, 3 to divide and 4 to multiply: \n");
    scanf("%d", &oper);

    switch(oper)
    {
        case 1:
            res = a + b;
            break;;
            
        case 2:
            res = a - b;
            break;
        case 3:
            res = a * b;
            break;
        case 4:
            res = a / b;
            break;
        default:
            res = 0;
    }
    
    if (res == 0)
    {
        printf("enter a valid operation");
    }
    else
    {
        printf("%d is the answer", res);
    }

    printf("\n");

    return 0;
}