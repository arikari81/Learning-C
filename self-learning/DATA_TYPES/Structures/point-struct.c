//a ppointer  to a strcutre allows us to access structyre members using arrow instead of dot operator

#include <stdio.h>

typedef struct point{
    int x, y;
}point;

int main(){
    point p = {1, 2};

    point *ptr = &p;

    printf("%d, %d\n", (*ptr).x, ptr->y);

    return 0;
}





