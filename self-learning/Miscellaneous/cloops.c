#include <stdio.h>
/*printing using loops*/
int main()
{
    int i = 1;
    while (i <= 3){
        printf("meow\n");
        i++;
    }
    
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
    return 0;
}