//LEARNING ABOUT STRUCTS IN C, PROPERLY THIS TIME

/*
A structure in C is a user-defined data type that groups related variables of different data types under a single name. 
It is useful for representing real-world entities and organizing related data into a single unit
*/

#include <stdio.h>

typedef struct A{ // defined a struct of name A, name defined here can be used within the struct
    int x;

}A; // final name that is given

int main(){

    A a; // defining the structure variable called a
    a.x = 11; // variable x for a is 11;

    printf("%d\n", a.x);

    return 0;
}


