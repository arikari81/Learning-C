// 11 b 
// to compute power(a, n) using loop and recursion

#include <stdio.h>

int powRec(int a, int n){ // recursioin
    if (n == 1){
        return a;
    }

    return a*powRec(a, n - 1);
}

int powLoop(int a, int n){
    int res = 1;
    for (int i = 0; i < n; i++){
        res *= a;
    }

    return res;
}

int main(){
    int a, n;

    printf("enter the base: ");
    scanf("%d", &a);
    printf("enter the power: ");
    scanf("%d", &n);

    printf("the result computed via loop iteration: %d\n", powLoop(a, n));
    printf("the result computed via recurion: %d\n", powLoop(a, n));

    return 0;
}




