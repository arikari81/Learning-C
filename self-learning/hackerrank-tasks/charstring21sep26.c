/*
You have to print the character, c,
in the first line.
Then print string s in next line.
In the last line print the sentence, sen.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    char ch;
    scanf(" %c", &ch);
    char s[100];
    scanf("%s\n", s);
    char sen[100];
    scanf("%[^\n]%*c", sen);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    return 0;
}
