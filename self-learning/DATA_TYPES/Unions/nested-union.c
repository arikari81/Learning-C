//Unions can be nested js like structures

#include <stdio.h>

typedef union{
    int rollNo;
    union perf{
        int marks;
    }performance;
}Student;

int main(){
    
}

