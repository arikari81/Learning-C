//loops

#include <stdio.h>

int main(){
    int n = 10;
    for (int i = 0 /*initialization*/; i < n /*condition*/; i++ /*updation*/){ //COUNT CONTROLLED
        break;
    }

    while(n > 5){ //ENTRY CONTROLLED

        printf("%d\n", n);
        n -=1;
    }printf("\n");

    do{ //EXIT CONTROLLED
        printf("%d\n", n);
        n-=1;
    }while(n > 5);printf("\n");

    //init outside loop
    int i = 1;
    for(; i < 5; i++){
        printf("%d\n", i);
    }printf("\n");

    //updation outside header
    for (int j = 0; j < 5;){
        printf("%d ", j);
        j++;
    }printf("\n");

    //no header condtion, break used wthin loops instead
    for(int j = 0; ; j++){
        if (j > 6){
            break;
        }

        printf("%d ", j);
    }printf("\n");

    //mult/div in loop except for simple increment decrement
    for (int j = 20; j < 2; j/=2){
        printf("%d", j);
    }printf("\n");

    for(int i =1, j = 10; i <=5 && j >= 8; i++, j--)<%
        printf("i = %d, j = %d\n", i, j);    
    %>

    return 0;
}



