// exp 15
// read a file containing hundreds of numbers and generate a frequency count report

#include <stdio.h>

#define MAX 1000

int main(){
    FILE *rF = fopen("num-read.txt", "r");
    if (rF == NULL) {
        printf("could not open file\n");
        return 1;
    }

    int values[MAX];    // each different number found
    int counts[MAX];    // how many times it appeared
    int unique = 0;
    int num;

    while (fscanf(rF, "%d", &num) == 1) {
        int found = 0;

        for (int i = 0; i < unique; i++) {
            if (values[i] == num) {
                counts[i]++;
                found = 1;
                break;
            }
        }

        if (!found && unique < MAX) {
            values[unique] = num;
            counts[unique] = 1;
            unique++;
        }
    }

    fclose(rF);

    printf("Number  Count\n");
    for (int i = 0; i < unique; i++)
        printf("%6d  %5d\n", values[i], counts[i]);

    return 0;
}
