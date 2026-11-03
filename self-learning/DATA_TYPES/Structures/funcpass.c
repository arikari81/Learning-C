//passing structures to funtions

#include <stdio.h>
#include <stdlib.h>

typedef struct A{
    int x;
}A;

void increment(A a, A *b){
    a.x++;
    (*b).x++;
    b->x++;
}

int main(){

    A a = {10};
    A b = {10};

    increment(a, &b);

    printf("a.x = %d\tb.x = %d\n", a.x, b.x);

    return 0;
}

/*
The size of a structure is not necessarily equal to 
the sum of the sizes of its members because the compiler 
may add padding bytes to satisfy alignment requirements.
*/

//structure padding means basically adding extra bytes bw or after
//members to properly align dat in memory

//packing means a technique which reduces or removes paddig to minimise memory usage
//it can be requested using compiler specific features such as #pragma pack or
//__attribute__((packed))



