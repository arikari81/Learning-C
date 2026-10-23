//structs are C's version of OOP, there is no class keyword in C unlike cpp
//structs are custon made dataypes
//memoery should be cleared before definng a strct, to prevent garbage.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student{

    char name[50]; //members
    int age;
    float gpa;
    bool isFULLTime;
};

/*alternative:
typedef struct{
    methods and attributes;
}Student;

with this, everytime "struct" wont be needed in main.
*/

void printStudent(struct Student stud){ //fucn to pirnt attributes of stud
    printf("%s\n", stud.name);
    printf("%d\n", stud.age);
    printf("%.2f\n", stud.gpa);
    printf("%s\n", (stud.isFULLTime) ? "Yes" : "No");
    printf("\n");
}

int main(){

    struct Student stud1 = {"Spongebob", 12, 9.3, true};
    printf("%s\n", stud1.name);
    printf("%.2f\n", stud1.gpa);
    printf("%d\n", stud1.age);
    printf("%s\n", (stud1.isFULLTime) ? "Yes" : "No"); // gives yes for true d no for false

    struct Student stud2 = {0};
    strcpy(stud2.name, "Sandy");
    stud2.age = 29;
    stud2.gpa = 9.9;
    stud2.isFULLTime = true;

    printf("%d\n", stud2.age);
    printf("%s\n", stud2.name);

    printf("\n");

    printStudent(stud1);


    return 0;
}

