#include <stdio.h>

int add(int a, int b){
    int c = a + b;
    return c;
}

int main(){
    int a = 5, b = 3;
    int res;
    res = add(a, b);

    printf("res is %d\n", res);
    return 0;

}