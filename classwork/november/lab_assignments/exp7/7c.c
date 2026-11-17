// recursion to return reversed string

#include <stdio.h>

void reverse(char str[], char rev[], int n) {
    if (str[0] == '\0') {
        return;
    }
    rev[n - 1] = str[0];
    reverse(str + 1, rev, n - 1);
}

int main() {
    char str[100] = "";
    char rev[100];
    int n = 0;

    printf("enter the string: ");
    scanf("%99[^\n]%n", str, &n);

    reverse(str, rev, n);
    rev[n] = '\0';

    printf("Reversed: %s\n", rev);

    return 0;
}






