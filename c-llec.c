#include <cs50.h>
#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Enter x: \n");
    scanf("%d", &x);

    printf("Enter y: \n");
    scanf("%d", &y);

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is more than y\n");
    }
    else
    {
        printf("x and y are equal\n");
    }

     return 0;
}
