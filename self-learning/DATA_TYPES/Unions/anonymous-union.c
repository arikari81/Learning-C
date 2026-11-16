//ANONYMOUS UNION
// ie a union declared without a name, which allows its memebrs
// to be accessed direstcly without a union variable
// useful when u need to access directly the union memebrs
// wiuthin a specific scope while still sharing the same mem location.

#include <stdio.h>

typedef union Student{
    int rollNo;
    
    union { // anonymous union
        int marks;
    } performance;
}Student;

int main(){

    Student abc;

    abc.rollNo = 21;
    printf("abc.rollNo: %d\n", abc.rollNo);

    //assigning the memebr of anonymous union
    abc.performance.marks = 91;
    printf("abc.perfromance.marks = %d\n", abc.performance.marks);

    return 0;
}





