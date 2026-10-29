//bank operations using switch

#include <stdio.h>

int main(){
    
    int bal = 5000; //initial value
    int amt = 0; //amt to be manipulated later for deposit or withdrawls
    int oper; // to be used in switch
    char ex;

    while(1){ //l loop to go until exit is desired by the user
        printf("WELCOME, CHERISHED ACCOUNT HOLDER\n");
        printf("KINDLY CHOOSE YOUR DESIRED OPERATION FROM THE FOLLOWING: \n");
        printf("1 TO CHECK BALANCE\n");  //menu
        printf("2 TO DEPOSIT MONEY\n");
        printf("3 TO WITHDRAW MONEY\n");
        printf("4 TO EXIT");
        scanf("%d", &oper);

        switch(oper){  //switch
            case 1:
                printf("YOUR CURRENT BALANCE IS: %d\n", bal);
                break;
            case 2:
                printf("ENTER THE AMOUNT OF MOEMY TO BE ADDED: \n");
                scanf("%d", &amt);

                bal += amt;
                printf("DONE! YOUR NEW BALANCE IS: %d\n", bal);
                break;
            case 3:
                printf("ENER THE AMOUNT OF MONEY TO BE WITHDRAWM: \n");
                scanf("%d", &amt);

                if (bal > amt){
                    bal -+ amt;
                    printf("DONE, YOUR NEW BALANCE IS: %d\n", bal);
                }
                else{
                    printf("INSUFFICIENT FUNDS!\n");
                }
                break;
            case 4:
                printf("ARE U SURE TO EXIT? (Y/n): ");
                scanf(" %c", &ex);
                if (ex == 'Y' || ex == 'y'){
                    printf("\tEXEUNT\n");
                    return 0;
                }
                else{
                    break;
                }
            default:
                printf("ENTER A VALD INPUT WITHIN THE RANGE\n");
        

        }


    }
}