//arrays are used to store many related values
//one single array of contigous values is used instead of mutliple variables
//indices are {0, 1, 2, etc}

#include <stdio.h>

int main(){
    //forms of array declaration:

    int a[5]; //local values remain un initialised
    int b[ ] = {1,2,3,4}; //compiler infers size 4;
    int c[5] = {10,20}; //remaining values are taken as 0
    int d[5] = {0}; // all values intialised as 0

    return 0;
}



