/*
Complete the function void update(int *a,int *b).
It receives two integer pointers,
int* a and int* b. Set the value of a to their sum,
and b to their absolute difference.
*/

#include <stdio.h>

void update(int *a,int *b) {
    int x = *a + *b;
    int y;
    if (*a > *b){
        y = *a - *b;
    }else{
        y = *b - *a;
    }

    *a = x;
    *b = y;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}