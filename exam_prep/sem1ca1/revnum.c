// checking for palindromes numbers (integers)

#include <stdio.h>

void palind(int n){
    int dig = n;
    int temp = 0;
    int rev = 0;

    for (int i = 0; i < sizeof(n); i++){
        rev += (float)(dig % 10);
        dig %= 10;
    }

    printf("%d\n", rev);
    if (rev == n){
        printf("%d is a palindrome\n", rev);
    }
    else{
        printf("not a palinrome\n");
    }
}

int main(){
    int n;
    printf("enter the the number to be checked: ");
    scanf("%d", &n);
    palind(n);
    
    return 0;
}