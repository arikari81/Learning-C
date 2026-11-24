//  creating a structure date, and using it within a strcuture person for D.O.B.

#include "stdio.h"

struct date{
    int date : 5;
    int month : 4;
    int year;
};

typedef struct{
    char name[40];
    int age;
    struct date DOB;
    int height; //cm
}Person;

int main(){
    /*TODO: 
        complete main*/
}



