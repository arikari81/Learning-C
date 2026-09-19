//pformng incrmenet operations

#include <stdio.h>
int main(){
    int x =10, y;
    y = x++;
    printf("x = %d, y= %d\n", x, y);

    int a = 5, b, c, d;
    b = ++a;
    c = a++;
    d = ++a;

    printf("a = %d, b = %d, c = %d, d  = %d\n", a, b, c, d);
    
    return 0;
}