//using recursive function to print the number of vowels in a string - exp7b

#include <stdio.h>

int retVow(char *word){

    if (*word == '\0'){
        return 0;
    }

    if ((*word == 'A') || (*word == 'a') || (*word == 'E') || (*word == 'e') || (*word == 'I') || (*word == 'i') || (*word == 'O') || (*word == 'o') || (*word == 'U') || (*word == 'u')){
        return 1 + retVow(word + 1);
    }else{
        return 0 + retVow(word + 1);
    }
}

int main(){

    char strin[99];
    printf("enter the string: ");
    scanf("%[^\n]", strin);

    printf("number of vowels is: %d\n", retVow(strin));

    return 0;
}



