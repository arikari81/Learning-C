//WAP to count the number of substrings in a string 

#include <stdio.h>
#include <string.h>

int sub_str_count(char *str, char *substr){
    int strl = strlen(str);
    int sublen = strlen(substr);
    if (strlen(str) == 0){
        printf("enpty strning\n");
        return 0;
    }
    int count = 0;
    for (int i = 0; i <= (strl - sublen); i++){
        int temp = 1;

        
        for (int j = 0; j < sublen; j++){
            if (str[i + j] != substr[j]){
                temp = 0;
                break;
            }
        }

        if(temp == 1){
            printf("match found at index %d\n", i);
            count += 1 ;
        } 

    }

    return count;
}

int main(void){
    char stri[50];
    char subst[10];

    printf("enter the main string: ");
    fgets(stri, sizeof(stri), stdin);
    stri[strcspn(stri, "\n")] = '\0';

    printf("enter the searchable string: ");
    fgets(subst, sizeof(subst), stdin);
    subst[strcspn(subst, "\n")] = '\0';

    int totcount = sub_str_count(stri, subst);
    printf("\ntotal nmber of occurences = %d\n", totcount);

}