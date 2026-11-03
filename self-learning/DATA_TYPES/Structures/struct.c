//example structure and further operations

#include <stdio.h>

typedef struct stu{ //without typedef, the actual name wouldbe declared initially
    int age;
    float marks;
}Student; //name

int main(){

    Student S = {20, 30.5}; // without typedef, "struct" keyword would be needed for every declaration
    //typedef creates an alias, thus making Student into a dataype itslef

    //using initialiser list
    Student s1 = {.age = 30, .marks = 34.4};
    //COPYING STRUCT:
    Student s2 = s1;

    printf("%d is the age\n", S.age);
    printf("%.2f are his marks\n", S.marks);

    Student *pS = &S; //pointer created, to the struct

    //printing the attributes using arrow operator
    printf("%d is the age printed with pointer\n", pS->age); // (*pS).age is the same as pS->age
    printf("%.2f are marks printed using the pointer\n", (*pS).marks);

    return 0;
}

