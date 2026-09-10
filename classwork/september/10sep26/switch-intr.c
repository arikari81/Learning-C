#include <stdio.h>
int main()
{
    int check;
    printf("enter the case number u wish to check\n");
    scanf("%d", &check);

    switch(check)
    {
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        default:
            printf("none match in the range\n");
    }   

    return 0;
}