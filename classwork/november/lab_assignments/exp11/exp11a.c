// exp 11a
// using loop iteration and recursive iteration to check wether a string is a palindrome

#include <stdio.h>

int checkLoop(char s[], int len) {
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int checkRec(char st[], int right, int left){
    if (left >= right){
        return 1;
    }

    while (st[left] != st[right]){
        return 0;
    }

    return checkRec(st, right - 1, left + 1);
}

int main(){
    char word[100];
    printf("enter the string: ");
    scanf("%99[^\n]", word);
    
    int len = 0;

    while (word[len] != '\0') {
        len++;
    }

    printf("Loop: %s\n", checkLoop(word, len) ? "yes" : "no");
    printf("Recursive: %s\n", checkRec(word, len - 1, 0) ? "yes" : "no");

    return 0;
}






