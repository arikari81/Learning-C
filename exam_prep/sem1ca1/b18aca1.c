// question 8a from set b1 of CA-1

/*
PROBLEM STATEMENT:-

An ATM stores a customer's account balance in the main() function. Develop a modular C program in which 
a function validateWithdrawal() receives the account balance
and requested withdrawal amount using call by value and determines whether the transaction is valid. 
A withdrawal is permitted only if the amount is positive, does not exceed the available balance,
and is a multiple of ₹100. If valid, another function withdrawAmount() must receive the account balance
using call by reference and update the original balance. Display the balance before and after the transaction. 
Structure the solution so that the
validation function cannot modify the original balance,
while the withdrawal function can. 
Justify the choice of parameter-passing method for the two functions.
*/

// SOLUTION:

#include <stdio.h>

//helper functions:

void withdrawAmount(double **balance, int **amt){ //by reference
    printf("\nCurrent balance = %.3f\n", **balance );
    **balance -= (float)**amt;
    printf("%d rupees worth of cash withdrawn, balance updated! new balance = %.3f\n",**amt, **balance);
}

void validateWithdrawal(int *amnt, double *balance){ // by reference
    int amn = *amnt;
    float balan = *balance;
    if ((amn > 0) && (amn % 100 == 0) && (amn < balan)){
        printf("\nValid amount, withdrawal initiated\n");
        withdrawAmount(&balance, &amnt);
    }
    else{
        printf("Invalid amount of money!\n");
    }

}

//main:

int main(){
    double bal = 20000.0; //initial arbritary balance
    int amt, oper;
    printf("HELLO AND WELCOME TO THE ATM, DEAR CUSTOMER\n");
    printf("PRESS: \n");
    while(1){
        printf("\n1 for withdrawal, 2 to exit: \n");
        printf("enter your desired operation: ");
        scanf("%d", &oper);
        switch(oper){
            case 1:
                printf("\nenter amount to be withdrawn: ");
                scanf("%d", &amt);
                validateWithdrawal(&amt, &bal);
                break;
            case 2:
                printf("\nbalance = %.3f\n", bal);
                printf("\n\tEXIT DONE!\n");
                return 0;
            default:
                printf("Kindy enter a valid operation ie 1 or 2 only\n");
                break;
        }
    }
    return 0;
}