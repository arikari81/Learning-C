// STRUCTURES USING BIT FIELDS

#include <stdio.h>

//can use signed ints, good for efecient memory allocation

typedef struct{
    int d : 5; 
    int m : 4; // 4 bits allocated to m, thus value: bw 0 and 15
    int y;
}date;

int main(){
    printf("Size of the date is %lu\n", sizeof(date));
    date dt = {
        31,
        12,
        2024
    };
    
    printf("date is %d/%d/%d\n", dt.d, dt.m, dt.y);

    return 0;
}









