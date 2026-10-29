/*understanding and learning functions in c*/

#include <stdio.h>

/*defining a function to print something*/

int printsomething()
{
    printf("something\n");
    return 0;
}

/*main*/
int main()
{
    char pew;
    printf("Do you want to print something? (Y/n): \n");
    scanf(" %c", &pew);
    
    /*condition*/
    if (pew == 'y' || pew == 'Y')
    {
        printsomething(); /*called funtion*/
    }
    else if (pew == 'n' || pew == 'N')
    {
        printf("okay\n");
    }
    else 
    {
        printf("\tenter a valid character\n");
    }

    return 0;
}