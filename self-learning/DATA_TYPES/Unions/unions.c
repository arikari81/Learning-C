//UNIONS ARE A USER DEFINED DATA TYPE
//ALL THE EMBERS ARE STORED IN THE SAME MEMORY LOACTION RESULTING IN ONLY ONE
//MEMBER CONTAINING THE DATA AT A TIME
//SIZE OF THE UNION IS THE SIZE OF THE LARGEST MEMBER

#include <stdio.h>
#include <string.h>

/* SYNTAX:
union union_name{
    dataype mem1;
    datatype mem2;

};
*/
//eg: 

typedef union{
    int i;
    float f;
    char str[20];
}Data;

int main(){
    Data data;
    data.i = 10;
    printf("data.i = %d\n", data.i);

    data.f = 3.3;
    printf("data.f = %.2f\n", data.f); //everytime a member is updated, the others are over written

    strcpy(data.str, "blehbleh, bleh");
    printf("data.str: %s\n", data.str);

    // Unions are useful for saving memory when 
    // only one of several data members is needed at a time
    
    printf("data.f = %.2f\n", data.f); // will give a garbage value

    return 0;
}






