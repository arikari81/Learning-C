/*displaying the days of the week depending on the day nuber entered*/

#include <stdio.h>
int main(void)
{
    int daynum;
    printf("enter the day number to be checked: ");
    scanf("%d", &daynum);

    switch (daynum)
    {
        case 1:
            printf("moneday");
            break;
        case 2:
            printf("tuesday");
            break;
        case 3:
            printf("wednesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;
        default:
            printf("enter a valid day number");
    }

    printf("\n");

}